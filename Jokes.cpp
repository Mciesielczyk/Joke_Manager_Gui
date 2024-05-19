#include "Jokes.h"
using namespace std;
#include <iostream>
#include <string>
#include <ctime>


Jokes::Jokes(string content,string type,string dateAdded,int rating,int ID):content(content), type(type),dateAdded(dateAdded), rating(rating),ID(ID){
    if (dateAdded.empty()) {
        time_t now = time(0);
        dateAdded = ctime(&now);
    }
}

int Jokes::getRating() {
	return rating;
}
int Jokes::getID() {
    return ID;
}

void Jokes::printJoke()  {
    std::cout << "ID: " << ID << std::endl;
    std::cout << "Type: " << type << std::endl;
    std::cout << "Content: " << content << std::endl;
    std::cout << "Date Added: " << dateAdded << endl;
    std::cout << "Rating: " << rating << " stars" << std::endl;
}

void Jokes::rateJoke(int newRating) {
    rating = newRating;
}

void Jokes::editJoke(string newContent) {
    content = newContent;
}
void Jokes::setData(string data) {
    data = dateAdded;
}
string Jokes::getData() {
    return dateAdded;
}

