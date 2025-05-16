#pragma once
#include "RoboPet.h"

class ParrotBot : public RoboPet {
private:
    int speakingSkills;
public:
    ParrotBot(int s, Trainer* t);
    void Train();
    void Speak();

};