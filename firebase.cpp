#include "firebase.h"


// Funkcja do obs³ugi zapisu do Firebase
size_t writeCallback(void* contents, size_t size, size_t nmemb, void* userp) {
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}
//id//content//type//rating//date
// Funkcja do dodawania nowego ¿artu do Firebase
void dodajNowyZart(int joke_id, const std::string& joke_content, const std::string& joke_type, int rating, const std::string& joke_date) {
    CURL* curl;
    CURLcode res;
    std::string readBuffer;

    // Inicjalizacja CURL
    curl = curl_easy_init();
    if (curl) {
        // Utworzenie URL do zapisu danych w Firebase
        std::string joke_id1 = std::to_string(joke_id);
        std::string firebase_url = "https://jokes-gui-e4b93-default-rtdb.europe-west1.firebasedatabase.app/Jokes/" + joke_id1 + ".json";

        // Dane do zapisania
        std::string postData = "{\"Content\": \"" + joke_content + "\", \"Type\": \"" + joke_type + "\", \"Rating\": " + std::to_string(rating) + ", \"Date\": \"" + joke_date + "\"}";
        // Ustawienie opcji dla CURL
        curl_easy_setopt(curl, CURLOPT_URL, firebase_url.c_str());
        curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "PUT");
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, postData.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);

        // Wykonanie zapytania
        res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            fprintf(stderr, "B³¹d podczas wysy³ania ¿¹dania CURL: %s\n", curl_easy_strerror(res));
        }
        else {
            std::cout << "Pomyœlnie dodano nowy ¿art do bazy danych Firebase." << std::endl;
        }

        // Zwolnienie zasobów CURL
        curl_easy_cleanup(curl);
    }
}

void odczytajDaneFirebase(const std::string& joke_id) {
    CURL* curl;
    CURLcode res;
    std::string readBuffer;

    // Inicjalizacja CURL
    curl = curl_easy_init();
    if (curl) {
        // Utworzenie URL do odczytu danych z Firebase
        std::string firebase_url = "https://jokes-gui-e4b93-default-rtdb.europe-west1.firebasedatabase.app/Jokes/" + joke_id + ".json";

        // Ustawienie opcji dla CURL
        curl_easy_setopt(curl, CURLOPT_URL, firebase_url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);

        // Wykonanie zapytania GET
        res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            fprintf(stderr, "B³¹d podczas wysy³ania ¿¹dania CURL: %s\n", curl_easy_strerror(res));
        }
        else {
            std::cout << "Pomyœlnie odczytano dane z Firebase:" << std::endl;
            std::cout << readBuffer << std::endl;
        }

        // Zwolnienie zasobów CURL
        curl_easy_cleanup(curl);
    }
}


//int main() {
//    // Przyk³ad u¿ycia
//    //id//content//type//rating//date
//    dodajNowyZart(124, "text", "short", 5, "06.30.2024");
//
//    //odczytajDaneFirebase("sdgd");
//    return 0;
//}

