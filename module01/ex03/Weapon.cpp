/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 00:16:27 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/08 11:28:25 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

using std::string;

Weapon::Weapon(string type)
{
	this->_type = type;
}

Weapon::~Weapon()
{
}

string Weapon::getType(void) const {
    return this->_type;
}

void Weapon::setType(string type) {
    this->_type = type;
}