#include "wizard.h"
#include "warrior.h"
#include <iostream>

int main() {
    Wizard wizard("Gandalf", 100, 20, 20);
    Warrior warrior("Aragorn", 120, 25, "Sword");

    while (wizard.getHealth() > 0 && warrior.getHealth() > 0) {
        wizard.castSpell(&warrior);
        if (warrior.getHealth() <= 0) {
            std::cout << warrior.getName() << " is defeated! " << wizard.getName() << " wins!" << std::endl;
            break;
        }

        warrior.swingWeapon(&wizard);
        if (wizard.getHealth() <= 0) {
            std::cout << wizard.getName() << " is defeated! " << warrior.getName() << " wins!" << std::endl;
            break;
        }
    }

    return 0;
}
