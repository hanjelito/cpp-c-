/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:14:03 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/21 11:14:36 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ):ClapTrap::ClapTrap()
{
	this->_Name			= "";
	this->_HitPoints	= 100;
	this->_EnergyPoints	= 100;
	this->_AttackDamage	= 30;
	cout << "\033[1;32m" << "FragTrap " << " was constructed no name" << "\033[0;37m" << endl;
}

FragTrap::FragTrap(string const &Name):ClapTrap::ClapTrap(Name)
{
	this->_HitPoints	= 100;
	this->_EnergyPoints	= 100;
	this->_AttackDamage	= 30;
	cout << "\033[1;32m" << "FragTrap " << " was constructed" << "\033[0;37m" << endl;
}

FragTrap::FragTrap(FragTrap const &fragtrap)
{
	 this->operator=(fragtrap);
	 cout << "\033[1;32m" << "FragTrap " << this->_Name << " copy constructor" << "\033[0;37m" << endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap)
{
	this->_Name         = fragtrap._Name;
    this->_HitPoints    = fragtrap._HitPoints;
    this->_EnergyPoints = fragtrap._EnergyPoints;
    this->_AttackDamage = fragtrap._AttackDamage;
	cout << "\033[1;32m" << "FragTrap " << this->_Name << " Assignation constructor" << "\033[0;37m" << endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	cout << "\033[1;32m" << "FragTrap is destroyed" << "\033[0;37m" << endl;
}

void FragTrap::highFivesGuys(void)
{
	cout << "\033[1;32m" << "FragTrap " << this->getName() << " High five!!!" << "\033[0;37m" << endl;
}
