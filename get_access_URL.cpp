
#include <curl/curl.h>
#include "get_access_URL.h"

#include <iostream>
#include <string>
#include <sstream>
#include <vector>


using namespace System::Windows::Forms;
using namespace msclr::interop;

void savetofile(DataGridView^ dataGridView, System::String^ filePath)
{
    std::string filePathStr = marshal_as<std::string>(filePath);
    std::ofstream file(filePathStr);

    if (!file.is_open())
    {
        MessageBox::Show("Nie mo¿na otworzyæ pliku do zapisu.", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    // Zapisz dane wierszy
    for (int i = 0; i < dataGridView->RowCount; ++i)
    {
        for (int j = 0; j < dataGridView->ColumnCount; ++j)
        {
            file << marshal_as<std::string>(dataGridView->Rows[i]->Cells[j]->Value == nullptr ? "" : dataGridView->Rows[i]->Cells[j]->Value->ToString());
            if (j < dataGridView->ColumnCount - 1)
            {
                file << ",";
            }
        }
        
    }

    file.close();
    MessageBox::Show("Dane zosta³y pomyœlnie zapisane do pliku.", "Sukces", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

void loadfile(System::Windows::Forms::DataGridView^ dataGridView, System::String^ filePath) {
    std::string filePathstr = msclr::interop::marshal_as<std::string>(filePath);
    std::ifstream file(filePathstr);

    if (!file.is_open()) {
        MessageBox::Show("Nie mo¿na otworzyæ pliku.", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }
    // Wczytaj dane z pliku CSV i wpisz do DataGridView
    std::vector<std::vector<std::string>> data; // Tablica dwuwymiarowa do przechowywania danych

    std::string line;
    while (std::getline(file, line))
    {
        std::vector<std::string> row;
        std::stringstream ss(line);
        std::string cell;

        while (std::getline(ss, cell, ','))
        {
            row.push_back(cell);
        }

        data.push_back(row);
    }

    file.close();
    data.pop_back();
    // Wpisz wczytane dane do DataGridView
    dataGridView->Rows->Clear(); // Wyczyœæ istniej¹ce dane w DataGridView
    
    for (const auto& row : data)
    {
        int rowIndex = dataGridView->Rows->Add(); // Dodaj nowy wiersz

        for (int i = 0; i < row.size(); ++i)
        {
            dataGridView->Rows[rowIndex]->Cells[i]->Value = gcnew System::String(row[i].c_str()); // Wpisz wartoœæ komórki
        }
    }


    MessageBox::Show("Dane zosta³y wczytane z pliku.", "Sukces", MessageBoxButtons::OK, MessageBoxIcon::Information);
}








// Funkcja callback do zapisywania danych odpowiedzi
size_t write_callback(void* ptr, size_t size, size_t nmemb, std::string* data) {
    // Pobierz wskaŸnik do bufora z danymi
    char* ptr_c = (char*)ptr;
    // Dodaj otrzymane dane do obiektu std::string
    data->append(ptr_c, size * nmemb);
    // Zwróæ liczbê zapisanych bajtów (rozmiar bufora * liczba elementów)
    return size * nmemb;
}


std::string change_string(std::string whole) {
    int ilosc_cud = 0;
    std::string newstring;
    for (int i = 0; i < whole.size()-1; i++)
    {
        if (whole[i] == '"') {
            ilosc_cud++;
            i++;
        }
        if (ilosc_cud == 7) {
            newstring = newstring + whole[i];
        }
        if (ilosc_cud == 8) {
            newstring = newstring + "  ";
        }
        if (ilosc_cud == 11) {
            newstring = newstring + whole[i];
        }
        if (ilosc_cud == 12) {
            newstring = newstring + " ";

        }
        if (ilosc_cud == 14) {
            newstring = newstring + whole[i];
        }

        
       
    }
    return newstring;
}
std::string wypisz_dane() {
    CURL* curl;
    CURLcode res;
    std::string joke;

    // Inicjalizacja biblioteki libcurl
    curl = curl_easy_init();
    if (curl) {
        // Ustaw adres URL
        curl_easy_setopt(curl, CURLOPT_URL, "https://official-joke-api.appspot.com/jokes/random");
        // W³¹cz automatyczne œledzenie przekierowañ
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        // Ustaw nag³ówek "User-Agent" (wymagany dla niektórych stron)
        curl_easy_setopt(curl, CURLOPT_USERAGENT, "libcurl-agent/1.0");
        // Ustaw funkcjê callback do zapisywania danych
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);
        // Przekazanie wskaŸnika do std::string jako u¿ytkownika danych
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &joke);

        // Wykonaj ¿¹danie HTTP
        res = curl_easy_perform(curl);
        // SprawdŸ czy wyst¹pi³y b³êdy
        if (res != CURLE_OK)
            std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;

        // Zawsze zakoñcz czyszczenie
        curl_easy_cleanup(curl);
    }

    return change_string(joke);
}