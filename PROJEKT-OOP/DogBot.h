#pragma once
#include "RoboPet.h"
class DogBot : public RoboPet {
private:
    int loyalty;
public:
    DogBot(int s, Trainer* t);
    void Train();
    void Speak();
    void DoABackFlip();
};