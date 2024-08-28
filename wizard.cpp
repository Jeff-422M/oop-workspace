#include "wizard.h"
#include <iostream>

Wizard::Wizard(std::string name, int health, int damage, int mana)
    : Player(name, health, mana), mana(mana) {}

void Wizard::castSpell(Player* opponent) {
    std::cout << name << " casts a spell on " << opponent->getName() << " for " << damage << " damage.\n";
    opponent->takeDamage(damage);
}

int Wizard::getMana() const {
    return mana;
}

void Wizard::setMana(int mana) {
    this->mana = mana;
}
