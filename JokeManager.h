#pragma once
#include "Jokes.h"
#include <vector>


class JokeManager {
private:
	std::vector<Jokes> jokes;

public:
	JokeManager();
	void addJoke(Jokes& joke);
	void removeJoke(int ID);
	void printAllJokes();

};
