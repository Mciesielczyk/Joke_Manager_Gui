#pragma once
#include <iostream>
#include <string>
#include <curl/curl.h>

size_t writeCallback(void* contents, size_t size, size_t nmemb, void* userp);
void dodajNowyZart(int joke_id, const std::string& joke_content, const std::string& joke_type, int rating, const std::string& joke_date);
void odczytajDaneFirebase(const std::string & joke_id);



