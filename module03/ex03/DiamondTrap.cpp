/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 01:16:49 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/21 14:15:38 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap(), ScavTrap(), FragTrap()
{
	this->_HitPoints	= this->FragTrap::getHitPoints();
    this->_EnergyPoints	= this->ScavTrap::getEnergyPoints();
    this->_AttackDamage	=  this->FragTrap::getAttackDamage();
	cout << "\033[1;35m" << "DiamondTrap was constructed no name" << "\033[0;37m" << endl;
}

DiamondTrap::DiamondTrap(string const Name): ClapTrap(Name + "_clap_names"), ScavTrap(Name), FragTrap(Name)
{
	this->_Name			= Name;
    this->_HitPoints	= this->FragTrap::getHitPoints();
    this->_EnergyPoints	= this->ScavTrap::getEnergyPoints();
    this->_AttackDamage	= this->FragTrap::getAttackDamage();

	cout << "\033[1;35m" << "DiamondTrap " << this->_Name << " was constructed no name" << "\033[0;37m" << endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &diamondtrap)
{
	this->operator=(diamondtrap);
}

void DiamondTrap::attack(const string Name)
{
	this->ScavTrap::attack(Name);
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondtrap)
{
	this->setName(diamondtrap._Name);

    this->_HitPoints    = diamondtrap._HitPoints;
    this->_EnergyPoints = diamondtrap._EnergyPoints;
    this->_AttackDamage = diamondtrap._AttackDamage;
	cout << "\033[1;35m" << "DiamondTrap " << diamondtrap._Name << " was cloned " << this->_Name << "\033[0;37m" << endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{ 
	cout << "delete " << this->_Name << this->_HitPoints << this->_EnergyPoints << this->_AttackDamage << endl;
	cout << "\033[1;35m" << "DiamondTrap " << this->_Name << " is destroyed" << "\033[0;37m" << endl;
}

void DiamondTrap::setName(string Name)
{
	this->ClapTrap::setName(Name + "_clap_names");
	this->_Name = Name;	
}

string const DiamondTrap::getName( void )
{
	return (this->_Name);
}