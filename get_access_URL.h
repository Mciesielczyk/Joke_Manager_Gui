#pragma once
#include <iostream>

std::string wypisz_dane();
size_t write_callback(void* ptr, size_t size, size_t nmemb, std::string* data);
std::string change_string(std::string whole);
