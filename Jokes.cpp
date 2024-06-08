#include "Jokes.h"
using namespace std;
#include <iostream>
#include <string>
#include <ctime>
#include <sstream>
#include <iomanip>

Jokes::Jokes(string content,string type,string dateAdded,int rating,int ID):content(content), type(type),dateAdded(dateAdded), rating(rating),ID(ID){
    if (dateAdded.empty()) {
        time_t now = time(0);
        tm* timeinfo = localtime(&now);

        char buffer[80];
        strftime(buffer, 80, "", timeinfo);
        dateAdded = buffer;

    }
}

int Jokes::getRating() {
	return rating;
}
int Jokes::getID() {
    return ID;
}
string Jokes::getContent() {
    return content;
}
string Jokes::getType() {
    return type;
}
string Jokes::getData() {
    return dateAdded;
}
void Jokes::printJoke()  {
    std::cout << "ID: " << ID << std::endl;
    std::cout << "Type: " << type << std::endl;
    std::cout << "Content: " << content << std::endl;
    std::cout << "Date Added: " << dateAdded << endl;
    std::cout << "Rating: " << rating << " stars" << std::endl;
}
string Jokes::printJokeAsString() {
    stringstream ss;
    ss << ID << " " << content << " " << type  << " " << rating << " " <<dateAdded <<endl;
    return ss.str();
}

void Jokes::rateJoke(int newRating) {
    rating = newRating;
}

void Jokes::editJoke(string newContent) {
    content = newContent;
}
void Jokes::setData(string data) {
    dateAdded = data;
}


std::ostream& operator<<(std::ostream& os, const Jokes& joke) {
    os << joke.ID << "#" << joke.content << "#" << joke.type << "#" << joke.rating << "#" << joke.dateAdded <<endl;
    return os;
}