#include "JokeManager.h"
#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

JokeManager::JokeManager(){}
JokeManager::~JokeManager(){}


JokeManager& JokeManager::getInstance()
{
    static JokeManager instance;
    return instance;
}

void JokeManager::addJoke(Jokes& joke) {
    jokes.push_back(joke);
}


//auto - automatyczne okreslenie typu zmiennej
//->dziala jak *it.getID// odwoluje do elementu za pomoca wskaznika lub iteratora
void JokeManager::removeJoke(int id) {
    for (auto it = jokes.begin(); it != jokes.end(); ) {
        if (it->getID() == id) {
            it = jokes.erase(it);  
        }
        else {
            ++it; 
        }
    }
}
void JokeManager::changeDate(int id, std::string Date) {
    for (auto& joke : jokes) {
        if (joke.getID() == id) {
            joke.setData(Date);
            break; 
        }
    }
}
void JokeManager::printAllJokes()  {
    for (auto it = jokes.begin(); it != jokes.end();it++) {
        it->printJoke();
        cout << "--------------------" << endl;
    }
    
}

    //wszystkie zarty w jeden string
std::string JokeManager::getAllJokes()
{
    std::stringstream ss;

    for (auto& joke : jokes)
    {
        ss << joke.getID() << " " << joke.getContent() << " " << joke.getType() << " " << joke.getRating() << " " << joke.getData() << endl;

    }

    return ss.str();
}


std::string JokeManager::getAllJokesH()
{
    std::stringstream ss;

    for (auto& joke : jokes)
    {
        ss << joke.getID() << "#" << joke.getContent() << "#" << joke.getType() << "#" << joke.getRating() << "#" << joke.getData() << "#"<<endl;

    }

    return ss.str();
}

//uzycie lambdy, krotka funckja []pozwala na korzystanie ze zmiennych
void JokeManager::sortJokesID() {
    std::sort(jokes.begin(), jokes.end(), [](Jokes a, Jokes b) {
        return a.getID() < b.getID();
        });

}
void JokeManager::sortJokesRate() {
    std::sort(jokes.begin(), jokes.end(), [](Jokes a, Jokes b) {
        return a.getRating() < b.getRating();
        });

}
void JokeManager::sortJokesDate() {
    std::sort(jokes.begin(), jokes.end(), [](Jokes a, Jokes b) {

        int dayA = std::stoi(a.getData().substr(0, 2));
        int monthA = std::stoi(a.getData().substr(3, 2));
        int yearA = std::stoi(a.getData().substr(6, 4));


        int dayB = std::stoi(b.getData().substr(0, 2));
        int monthB = std::stoi(b.getData().substr(3, 2));
        int yearB = std::stoi(b.getData().substr(6, 4));
        if (yearA != yearB) {
            return yearA < yearB;
        }
        else if (monthA != monthB) {
            return monthA < monthB;
        }
        else {
            return dayA < dayB;
        }
        });

}

std::ostream& operator<<(std::ostream& os, const JokeManager& manager) {
    for (const auto& joke : manager.jokes) {
        os << joke;
    }
    return os;
}