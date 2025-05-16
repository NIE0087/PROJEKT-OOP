#include "DogBot.h"

DogBot::DogBot(int s, Trainer* t) : RoboPet(s, "DogBot", t) {
    this->loyalty = 10;
}

void DogBot::Train() {
    this->level += 1;
    this->loyalty += 5;
    cout << this->model << " trained. Level: " << this->level << ", Loyalty: " << this->loyalty << endl;
}

void DogBot::Speak() {
    cout << this->model << ": WOOF WOOF GRR Loyalty: " << this->loyalty << endl;
}

void DogBot::DoABackFlip() {
    if (this->level >= 2)
    {
        cout << "DID AN EPIC BACKFLIP" << endl;

    }
    else
    {
        cout << "EPICLY FAILED A BACKFLIP" << endl;
    }
}
