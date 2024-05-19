#pragma once
#include <string>
 class Jokes
{
private:
	std::string content;
	std::string type;
	std::string dateAdded;
	int rating;
	int ID;


public:
	Jokes(std::string content, std::string type,std::string dateAdded, int rating,int ID);
	int getRating();
	void printJoke();
	void rateJoke(int newRating);
	void editJoke(std::string newCotentn);
	void setData(std::string data);
	int getID();
	std::string getData();
};

