#include "Academy.h"
#include<sstream>
#include<vector>
using namespace std;

int main() {
    const int trainerCapacity = 10;
    const int petCapacity = 30;

    Academy academy(trainerCapacity, petCapacity);

    
    vector<Trainer*> createdTrainers;

    
    for (int i = 0; i < trainerCapacity; ++i) {
        string name = "Trainer_" + to_string(i + 1);
        if (i % 2 == 0)
            createdTrainers.push_back(academy.CreateTrainer(i + 1, name));  
        else
            createdTrainers.push_back(academy.CreateTrainer(i + 1, name, "License_" + to_string(i + 1)));
    }

    
    cout << "\n--- Seznam treneru ---\n";
    for (int i = 0; i < trainerCapacity; ++i) {
        Trainer* t = createdTrainers[i];
        cout << "ID: " << t->GetID()
            << ", Jmeno: " << t->GetName()
            << ", Licence: " << (t->GetLicense())
            << endl;
    }

    int serial = 1000;
    vector<RoboPet*> createdPets;
    //polymorfni datova struktura
    for (int i = 0; i < createdTrainers.size(); ++i) {
       createdPets.push_back(academy.CreateDogBot(serial++, createdTrainers[i]));
        createdPets.push_back(academy.CreateCatBot(serial++, createdTrainers[i]));
        if (i% 2 == 0) {
            createdPets.push_back(academy.CreateParrotBot(serial++, createdTrainers[i]));
    }
    }

    cout << "\n--- Seznam RoboMazlicku ---\n";
    for (int i = 0; i < createdPets.size() ; ++i) {
        RoboPet* p = createdPets[i];
        cout << "Model: " << p->GetModel()
            << ", Trener: " << p->GetOwner()->GetName()
           
            << endl;
    }
    createdPets[4]->Speak();
    createdPets[4]->Train();
    createdPets[3]->Speak(); 
    CatBot* dog = new CatBot(690, createdTrainers[9]);
    dog->GetOwner();
    cout << "--------" << endl;
    ParrotBot* fish = new ParrotBot(800, createdTrainers[2]);
    cout << "Pocet mazlicku: " << RoboPet::GetPetCount() << endl;
    cout << "--------" << endl;
    //polymorfni prirazeni
    DogBot* cat = new DogBot(420, createdTrainers[6]);
    cat->Train();
    cat->DoABackFlip();
    RoboPet* mazelRobotowy = cat;
    mazelRobotowy->Speak();
    cout << "--------" << endl;
    cout << "Pocet mazlicku: " << RoboPet::GetPetCount() << endl;

    academy.TrainAll();
    return 0;
}


