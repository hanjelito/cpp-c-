/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 14:16:17 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/14 15:38:53 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const string Name): ClapTrap::ClapTrap(Name)
{
    
    this->_HitPoints    = 100;
    this->_EnergyPoints = 50; 
    this->_AttackDamage = 20;
    cout << "ScavTrap " << this->_Name << "was constructed" << endl;
}