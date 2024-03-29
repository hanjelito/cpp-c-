/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 02:16:19 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/24 23:35:35 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Cat.hpp"

Cat::Cat( void ): Animal("Cat")
{
	cout << YELLOW << "Cat  was constructed" << WHITE << endl;
}

Cat::Cat(const Cat &cat)
{
	cout << YELLOW <<  "Cat Copy constructor called" << WHITE << endl;
	this->operator=(cat);
}

Cat &Cat::operator=(const Cat &cat)
{
	this->_Type = cat._Type;
	cout << YELLOW << "Cat " << this->_Type << " cloned constructor" << WHITE << endl;
	return (*this);
}

Cat::~Cat()
{
	cout << YELLOW << "Cat is destroyed" << WHITE << endl;
}
//
void Cat::makeSound( void ) const
{
	cout << YELLOW << this->_Type << " Miauuuu" << WHITE << endl;
}
