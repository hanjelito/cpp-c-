#include <iostream>
#include "Zombie.hpp"

int main(void)
{
    int nbHorde = 10;
    Zombie *horde = zombieHorde(nbHorde, " 🧟‍♂️ ");  

    for(int i = 0; i < nbHorde; i++)
        horde[i].announce();
    delete []horde;
    return (0);
}