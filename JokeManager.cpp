#include "JokeManager.h"
#include <iostream>
using namespace std;

JokeManager::JokeManager(){}

void JokeManager::addJoke(Jokes& joke) {
    jokes.push_back(joke);
}

void JokeManager::removeJoke(int id) {
    for (auto it = jokes.begin(); it != jokes.end(); ) {
        if (it->getID() == id) {
            it = jokes.erase(it);  // Erase returns the next iterator, which we assign to 'it'
        }
        else {
            ++it;  // Only increment if not erased
        }
    }
}
void JokeManager::printAllJokes()  {
    for (auto it = jokes.begin(); it != jokes.end();it++) {
        it->printJoke();
        cout << "--------------------" << endl;
    }
    
}


