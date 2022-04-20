/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 23:53:40 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/20 00:45:10 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _Name("")
{
	this->_HitPoints 	= 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
	cout << "A ClapTrap with no name was constructed" << endl;
}

ClapTrap::ClapTrap(const string Name) : _Name(Name)
{
	this->_HitPoints 	= 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
	cout << "A ClapTrap " << this->_Name << " was constructed" << endl;
}

ClapTrap::ClapTrap( const ClapTrap &claptrap)
{
	*this = claptrap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap )
{
	cout << "ClapTrap " << claptrap._Name << " was cloned " << this->_Name << endl;
	this->_Name = claptrap._Name;
	this->_HitPoints = claptrap._HitPoints;
	this->_EnergyPoints = claptrap._EnergyPoints;
	this->_AttackDamage = claptrap._AttackDamage;
	return (*this);
}

ClapTrap::~ClapTrap( void )
{
	cout << "ClapTrap " << this->_Name << " is destroyed" << endl;
}

void ClapTrap::attack(string const &target)
{
	if (this->_EnergyPoints > 0)
	{
		--this->_HitPoints;
		cout	<< "ClapTrap " << this->getName()
				<< " attack " << target
				<< " , causing " << this->getAttackDamage()
				<< " points of damage!" 
				<< endl;
	} else {
		cout << "ClapTrap " << this->_Name << " is dead can't attack "  << endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_EnergyPoints > 0)
	{
		
		if(this->_EnergyPoints < (int)amount)
			this->_EnergyPoints = 0;
		else
			this->_EnergyPoints -= amount;
		cout	<< "ClapTrap " << this->getName()
				<< " take damage of " << amount
				<< " , now has " << this->getEnergyPoints()
				<< " points of Energy!" 
				<< endl;
	} else {
		cout << "ClapTrap " << this->_Name << " is dead can't take damage " << endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_EnergyPoints)
	{
		this->_EnergyPoints += amount;
		cout	<< "ClapTrap " << this->getName()
				<< " is repaired whith " << amount
				<< " , your energy is  " << this->getEnergyPoints()
				<< endl;
	} else {
		cout << "ClapTrap " << this->_Name << " this dead cannot be repaired." << endl;
	}
}
//
void ClapTrap::setName(string Name)
{
	this->_Name = Name;
}
void ClapTrap::setHitPoints(int HitPoints)
{
	this->_HitPoints = HitPoints;
}
void ClapTrap::setEnergyPoints(int EnergyPoints)
{
	this->_EnergyPoints = EnergyPoints;
}
void ClapTrap::setAttackDamage(int AttackDamage)
{
	this->_AttackDamage = AttackDamage;
}
//
string ClapTrap::getName( void )
{
	return (this->_Name);
}
int ClapTrap::getHitPoints( void )
{
	return (this->_HitPoints);
}
int ClapTrap::getEnergyPoints( void )
{
	return (this->_EnergyPoints);
}
int ClapTrap::getAttackDamage( void )
{
	return (this->_AttackDamage);
}
