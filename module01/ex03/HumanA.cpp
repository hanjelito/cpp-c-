/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 01:29:09 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/08 21:34:57 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "HumanA.hpp"


HumanA::HumanA( std::string name, Weapon &weapon ) : _weapon( weapon)
{
	this->_name = name;
}

HumanA::~HumanA()
{
}

void HumanA::attack( void ) const
{
	std::cout << this->_name << "  attacks with his " << this->_weapon.getType() << std::endl;
}
