#include "CatBot.h"
CatBot::CatBot(int s, Trainer* t) : RoboPet(s, "CatBot", t) {
    this->curiosity = 100;
}

void CatBot::Train() {
    this->level++;
    this->curiosity += 3;
    cout << this->model << "  Level: " << this->level << ", Curiosity: " << this->curiosity << endl;
}

void CatBot::Speak() {
    cout << this->model << ": Miauuu? Curiosity: " << this->curiosity << endl;
}