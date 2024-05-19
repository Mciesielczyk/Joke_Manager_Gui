
#include <curl/curl.h>
#include "get_access_URL.h"

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

// Funkcja callback do zapisywania danych odpowiedzi
size_t write_callback(void* ptr, size_t size, size_t nmemb, std::string* data) {
    // Pobierz wska�nik do bufora z danymi
    char* ptr_c = (char*)ptr;
    // Dodaj otrzymane dane do obiektu std::string
    data->append(ptr_c, size * nmemb);
    // Zwr�� liczb� zapisanych bajt�w (rozmiar bufora * liczba element�w)
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
        // W��cz automatyczne �ledzenie przekierowa�
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        // Ustaw nag��wek "User-Agent" (wymagany dla niekt�rych stron)
        curl_easy_setopt(curl, CURLOPT_USERAGENT, "libcurl-agent/1.0");
        // Ustaw funkcj� callback do zapisywania danych
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);
        // Przekazanie wska�nika do std::string jako u�ytkownika danych
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &joke);

        // Wykonaj ��danie HTTP
        res = curl_easy_perform(curl);
        // Sprawd� czy wyst�pi�y b��dy
        if (res != CURLE_OK)
            std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;

        // Zawsze zako�cz czyszczenie
        curl_easy_cleanup(curl);
    }

    return change_string(joke);
}