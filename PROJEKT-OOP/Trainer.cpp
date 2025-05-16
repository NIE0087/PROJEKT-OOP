#include "Trainer.h"

int Trainer::count = 0;

Trainer::Trainer(int i, string n) {
    this->id = i;
    this->name = n;
    this->license = "no license"; 
    count++;
}

Trainer::Trainer(int i, string n, string l) {
    this->id = i;
    this->name = n;
    this->license = l; 
    Trainer::count+=1;
}

Trainer::~Trainer() {
    Trainer::count-=1;
   
}

int Trainer::GetID() {
    return this->id;
}

string Trainer::GetName() {
    return this->name;
}

string Trainer::GetLicense() {
    return this->license;
}

int Trainer::GetTrainerCount() {
    return Trainer::count;
}