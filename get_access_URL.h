#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <msclr/marshal_cppstd.h>
#include <msclr/marshal.h>
#include <Windows.h>

std::string wypisz_dane();
size_t write_callback(void* ptr, size_t size, size_t nmemb, std::string* data);
std::string change_string(std::string whole);

void savetofile(System::Windows::Forms::DataGridView^ dataGridView, System::String^ filePath);
void loadfile(System::Windows::Forms::DataGridView^ dataGridView, System::String^ filePath);
