#pragma once
#include "CatBot.h"
#include "DogBot.h"
#include "ParrotBot.h"

class Academy {
private:
    Trainer** trainers;
    RoboPet** pets;
    int trainerCount;
    int petCount;

public:
    Academy(int t, int p);
    ~Academy();

    Trainer* CreateTrainer(int id, string name);
    Trainer* CreateTrainer(int id, string name, string l);
    RoboPet* CreateDogBot(int serial, Trainer* t);
    RoboPet* CreateCatBot(int serial, Trainer* t);
    RoboPet* CreateParrotBot(int serial, Trainer* t);
    void TrainAll();
};

