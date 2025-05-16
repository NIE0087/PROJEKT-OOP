#pragma once
#include "RoboPet.h"

class CatBot : public RoboPet {
private:
    int curiosity;
public:
    CatBot(int s, Trainer* t);
    void Train();
    void Speak();
  
};