/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 00:48:39 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/27 02:16:42 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal( void ): _Type("")
{
	cout << RED << "Animal no Type construted" << WHITE << endl;
}

Animal::Animal(const string Type): _Type(Type)
{
	cout << RED << "Animal " << this->_Type << " as construted" << WHITE << endl;
}

Animal::Animal(const Animal &animal): _Type(animal.getType())
{
	this->operator=(animal);
	cout << RED << "Animal " << this->_Type  << " Copy constructor called" << WHITE << endl;
}

Animal  &Animal::operator=(const Animal &animal)
{
	// this->_Type = animal._Type;
	// or
	this->setType(animal.getType());
	cout << RED << "Animal: " << this->_Type << "  cloned constructor" << WHITE << endl;
	return (*this);
}

Animal::~Animal( void )
{
	cout << RED << "Animal " << this->getType() << " is destroyed" << WHITE << endl;
}
//
void Animal::makeSound( void ) const
{
	cout << RED << this->getType() << "No sound" << WHITE << endl;
}
//
void Animal::setType(const string Type)
{
	this->_Type = Type;
}

string Animal::getType( void ) const
{
	return (this->_Type);
}

void Animal::beDeep(void) const
{
    std::cout << "ummm" << std::endl;
    return;
}
