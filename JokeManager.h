#pragma once
#include "Jokes.h"
#include <vector>

//singleton//lambda//stringstream//auto//
class JokeManager {
private:
	std::vector<Jokes> jokes;
	JokeManager();
	~JokeManager();
public:
	static JokeManager& getInstance(); //wzorzec singleton istnieje tylko jedna instancja klasy JokeManager i zapewnia globalny dostêp do tej instancji.

	void addJoke(Jokes& joke);
	void removeJoke(int ID);
	void changeDate(int ID, std::string Date);
	void printAllJokes();
	std::string getAllJokes();
	std::string getAllJokesH();

	void sortJokesID();
	void sortJokesRate();
	void sortJokesDate();

	friend std::ostream& operator<<(std::ostream& os, const JokeManager& manager);
	


};
