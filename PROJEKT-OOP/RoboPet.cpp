#include "RoboPet.h"
int RoboPet::count = 0;

RoboPet::RoboPet(int s, string m, Trainer* t) {
    this->serial = s;
    this->model = m;
    this->owner = t;
    this->level = 1;
    RoboPet::count+=1;
}

RoboPet::~RoboPet() {
    RoboPet::count-=1;
}

int RoboPet::GetSerial() {
    return this->serial;
}

string RoboPet::GetModel() {
    return this->model;
}

int RoboPet::GetLevel() {
    return this->level;
}

Trainer* RoboPet::GetOwner() {
    return this->owner;
}

int RoboPet::GetPetCount() {
    return RoboPet::count;
}