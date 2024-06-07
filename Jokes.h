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
	std::string printJokeAsString();
	
	
	void printJoke();
	void rateJoke(int newRating);
	void editJoke(std::string newCotentn);
	void setData(std::string data);

	int getID();
	std::string getContent();
	std::string getType();
	std::string getData();
	int getRating();

	//operator << nie jest funkcj¹ cz³onkowsk¹ wiec potrzenuje friend
	friend std::ostream& operator<<(std::ostream& os, const Jokes& joke);
};

