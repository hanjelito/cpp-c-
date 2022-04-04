#include <iostream>
#include "Zombie.hpp"

int main(void)
{
    Zombie *first = newZombie("first");
    first->announce();
    delete first;

    Zombie midle = Zombie("david");
    midle.announce();

    randomChump("last");    
    return (0);
}