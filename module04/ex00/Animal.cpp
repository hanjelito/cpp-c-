/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 00:48:39 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/23 17:19:17 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal( void ): _Type("")
{
	cout << "Animal no name construted" << endl;
}

Animal::Animal(const string Type): _Type(Type)
{
	cout << "Animal " << this->_Type << " as construted" << endl;
}

Animal::Animal(const Animal &animal)
{
	this->operator=(animal);
	cout << "Animal Copy constructor called" << endl;
}

Animal  &Animal::operator=(const Animal &animal)
{
	this->_Type = animal._Type;
	cout << "Animal " << this->_Type << " Assing constructor" << endl;
	return (*this);
}

Animal::~Animal()
{
	cout << "Animal is destroyed" << endl;
}
//
void Animal::makeSound( void ) const
{
	cout << "No sound" << endl;
}
//
void Animal::setType(const string Type)
{
	this->_Type = Type;
}

string Animal::getType( void ) const
{
	return this->_Type;
}