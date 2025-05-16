#pragma once
#include "ITrainable.h"
#include "Trainer.h"

class RoboPet : public ITrainable {
protected:
    int serial;
    string model;
    int level;
    Trainer* owner;
    static int count;

public:
    RoboPet(int s, string m, Trainer* t);
    virtual ~RoboPet();

    int GetSerial();
    string GetModel();
    int GetLevel();
    Trainer* GetOwner();

    void Speak() = 0;
    void Train() = 0;

    static int GetPetCount();
};

