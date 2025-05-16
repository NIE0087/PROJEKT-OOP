#pragma once

#include<iostream>
using namespace std;
class Trainer {
private:
    int id;
    string name;
    static int count;
    string license; 

public:
    Trainer(int i, string n);
    Trainer(int i, string n, string l); // trener nemusi mit nutne licenci
    ~Trainer();

    int GetID();
    string GetName();
    string GetLicense();
    static int GetTrainerCount();
};

