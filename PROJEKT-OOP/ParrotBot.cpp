#include "ParrotBot.h"
ParrotBot::ParrotBot(int s, Trainer* t) : RoboPet(s, "ParrotBot", t) {
    this->speakingSkills = 0;
}

void ParrotBot::Train() {
    this->level++;
    this->speakingSkills += 10;
    cout << this->model << "  Level: " << this->level << ", speaking skills: " << this->speakingSkills << endl;
}

void ParrotBot::Speak() {
    cout << this->model << ": A-HOJ speaking skills: " << this->speakingSkills << endl;
}