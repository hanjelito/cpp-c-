/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 02:16:19 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/24 01:35:28 by juan-gon         ###   ########.fr       */
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
	this->operator=(cat);
	cout << "Cat Copy constructor called" << endl;
}

Cat &Cat::operator=(const Cat &cat)
{
	this->_Type = cat._Type;
	cout << "Cat " << this->_Type << " assing constructor" << endl;
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
