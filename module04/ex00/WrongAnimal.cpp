/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 10:54:15 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/24 23:59:55 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _Type("")
{
	cout << "WrongAnimal no Type construted" << endl;
}

WrongAnimal::WrongAnimal(const string Type): _Type(Type)
{
	cout << "WrongAnimal " << this->_Type << " as construted" << endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &wronganimal): _Type(wronganimal.getType())
{
	this->operator=(wronganimal);
	cout << "WrongCat " << this->_Type  << " Copy constructor called" << endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wronganimal)
{
	// this->_Type = wronganimal._Type;
	// or
	this->setType(wronganimal.getType());
	cout << "WrongAnimal " << this->_Type << " cloned constructor" << endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	cout << "WrongAnimal " << this->getType() << " is destroyed" << endl;
}
//
void WrongAnimal::makeSound() const
{
	cout << "Error sound" << endl;
}
//
void WrongAnimal::setType(string const type)
{
    this->_Type = type;
}

string WrongAnimal::getType(void) const
{
    return (this->_Type);
}
