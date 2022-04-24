/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 02:16:19 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/24 13:43:45 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Cat.hpp"

Cat::Cat( void ): Animal("Cat")
{
	cout << "Cat  was constructed" << endl;
}

Cat::Cat(const Cat &cat)
{
	cout << "Cat Copy constructor called" << endl;
	this->operator=(cat);
}

Cat &Cat::operator=(const Cat &cat)
{
	this->_Type = cat._Type;
	cout << "Cat " << this->_Type << " cloned constructor" << endl;
	return (*this);
}

Cat::~Cat()
{
	cout << "Cat is destroyed" << endl;
}
//
void Cat::makeSound( void ) const
{
	cout << this->_Type << " Miauuuu" << endl;
}
