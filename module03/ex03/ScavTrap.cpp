/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 14:16:17 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/22 02:25:57 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
    this->_Name         = "";
    this->_HitPoints    = 100;
    this->_EnergyPoints = 50; 
    this->_AttackDamage = 20;
    cout << "\033[1;33m" << "ScavTrap was constructed no name" << "\033[0;37m" << endl;
}

ScavTrap::ScavTrap(const string Name): ClapTrap::ClapTrap(Name)
{
    this->_HitPoints    = 100;
    this->_EnergyPoints = 50; 
    this->_AttackDamage = 20;
    cout << "\033[1;33m" << "ScavTrap " << this->_Name << " was constructed" << "\033[0;37m" << endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap)
{
    this->operator=(scavtrap);
    cout << "\033[1;33m" << "ScavTrap " << this->_Name << " copy constructor" << "\033[0;37m" << endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap)
{
    this->_Name         = scavtrap._Name;
    this->_HitPoints    = scavtrap._HitPoints;
    this->_EnergyPoints = scavtrap._EnergyPoints;
    this->_AttackDamage = scavtrap._AttackDamage;
    cout << "\033[1;33m" << "ScavTrap " << this->_Name << " Assignation constructor" << "\033[0;37m" << endl;
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    cout << "\033[1;33m" << this->_Name << " ScavTrap is destroyed" << "\033[0;37m" << endl;
}

void ScavTrap::attack(const string &target)
{
    if (this->_EnergyPoints > 0)
	{
		--this->_HitPoints;
		cout	<< "\033[1;33m"
                << "ScavTrap " << this->getName()
				<< " attack " << target
				<< " , causing " << this->getAttackDamage()
				<< " points of damage!" 
                << "\033[0;37m"
				<< endl;
	} else {
		cout << "\033[1;33m" << "ScavTrap " << this->_Name << " is dead can't attack " << "\033[0;37m" << endl;
	}
}

void ScavTrap::guardGate(void)
{
    cout << "\033[1;33m" << "ScavTrap " << this->_Name << " have enterred in Gate keeper mode" << "\033[0;37m" << endl;
}

void ScavTrap::setName(string Name)
{
    this->_Name = Name;
}

 string ScavTrap::getName()
 {
     return (this->_Name);
 }
 