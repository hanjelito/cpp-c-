#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name (name)
{
    std::cout << this->_name << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->_name << ":" << " died." << std::endl;
}
void Zombie::announce(void)
{
    std::cout << this->_name << ":" << " BraiiiiiiinnnzzzZ." << std::endl;
}
