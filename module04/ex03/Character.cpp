/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 02:16:36 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/28 03:03:09 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"



Character::Character():_Name("No Materia")
{
	for (this->_SizeSlot = 0; this->_SizeSlot < 4; this->_SizeSlot++)
	{
		this->_Slot[this->_SizeSlot] = 0;
	}
	
}

Character::Character(string const Name): _Name(Name)
{
	this->_Name = Name;
	for (this->_SizeSlot = 0; this->_SizeSlot < 4; this->_SizeSlot++)
	{
		this->_Slot[this->_SizeSlot] = 0;
	}
}

Character::~Character()
{
	
}