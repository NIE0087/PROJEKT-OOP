#include "Academy.h"

Academy::Academy(int t, int p) {
    this->trainerCount = 0;
    this->petCount = 0;
    this->trainers = new Trainer * [t]();
    this->pets = new RoboPet * [p]();
}

Academy::~Academy() {
    for (int i = 0; i < trainerCount; i++) 
    {
        delete this->trainers[i]; 
    }
    delete[] trainers;

    for (int i = 0; i < petCount; i++) 
    { 
        delete this->pets[i]; 
    }
    delete[] pets;
}

Trainer* Academy::CreateTrainer(int id, string name) {
    Trainer* newT = new Trainer(id, name);
    this->trainers[this->trainerCount++] = newT;
    return newT;
}

Trainer* Academy::CreateTrainer(int id, string name, string l) {
    Trainer* newT = new Trainer(id, name, l);
    this->trainers[this->trainerCount++] = newT;
    return newT;
}

RoboPet* Academy::CreateDogBot(int serial, Trainer* t) {
    RoboPet* pet = new DogBot(serial, t);
    this->pets[this->petCount++] = pet;
    return pet;
}

RoboPet* Academy::CreateCatBot(int serial, Trainer* t) {
    RoboPet* pet = new CatBot(serial, t);
    this->pets[this->petCount++] = pet;
    return pet;
}

RoboPet* Academy::CreateParrotBot(int serial, Trainer* t) {
    RoboPet* pet = new ParrotBot(serial, t);
    this->pets[this->petCount++] = pet;
    return pet;
}

void Academy::TrainAll() {
    for (int i = 0; i < petCount; i++) {
        this->pets[i]->Train();
    }
}