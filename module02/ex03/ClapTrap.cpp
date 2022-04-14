/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 23:53:40 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/14 04:17:53 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _Name("")
{
	this->_HitPoints 	= 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
	cout << "A ClapTrap with no name was build" << endl;
}

ClapTrap::ClapTrap(const string Name) : _Name(Name)
{
	this->_HitPoints 	= 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
	cout << "A ClapTrap " << this->_Name << " was build" << endl;
}

ClapTrap::ClapTrap( const ClapTrap &claptrap)
{
	*this = claptrap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap )
{
	cout << "ClapTrap " << this->_Name << " was cloned" << endl;
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
	if (!this->_HitPoints)
	{
		--this->_HitPoints;
		cout	<< "ClapTrap " << this->getName()
				<< " attack " << target
				<< " , causing " << this->getAttackDamage()
				<< " points of damage!" 
				<< endl;
	} else {
		cout << "ClapTrap " << this->_Name << "has 0 Attack points" << endl;
	}
}


void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->_EnergyPoints)
	{
		this->_EnergyPoints -= amount;
		cout	<< "ClapTrap " << this->getName()
				<< " take " << amount
				<< " , causing " << this->getAttackDamage()
				<< " points of Energy!" 
				<< endl;
	} else {
		cout << "ClapTrap " << this->_Name << "has 0 Energy points" << endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->_EnergyPoints)
	{
		this->_EnergyPoints += amount;
	} else {
		
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
