/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 10:54:15 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/24 22:34:16 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _Type("No type")
{
	cout << this->_Type << " as constructed" << endl;
}

WrongAnimal::WrongAnimal(const string Type): _Type(Type)
{
	cout << this->_Type << " as constructed" << endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &wronganimal): _Type(wronganimal.getType())
{
	cout << "WrongCat Copy constructor called" << endl;
	this->operator=(wronganimal);
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wronganimal)
{
	
	this->setType(wronganimal.getType());
	cout << "WrongAnimal " << this->_Type << " cloned constructor" << endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	cout << this->getType() << " as destroyed" << endl;
}

void WrongAnimal::makeSound() const
{
	cout << "Error sound" << endl;
}

void WrongAnimal::setType(string const type)
{
    this->_Type = type;
}

string WrongAnimal::getType(void) const
{
    return (this->_Type);
}
