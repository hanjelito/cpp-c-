/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 02:16:19 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/23 02:48:29 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Cat.hpp"

Cat::Cat( void ): Animal::Animal()
{
	this->_Type	= "";
	cout << "Cat  was constructed" << endl;
}

Cat::Cat(const Cat &cat): Animal("Cat")
{
	this->operator=(cat);
	cout << "Animal Copy constructor called" << endl;
}

Cat &Cat::operator=(const Cat &cat)
{
	this->_Type = cat._Type;
	cout << "Cat " << this->_Type << " assing constructor" << endl;
	return (*this);
}

Cat::~Cat()
{
	cout << "Cat is destroyed";
}
//
void Cat::makeSound( void ) const
{
	cout << "Miauuuu" << endl;
}
