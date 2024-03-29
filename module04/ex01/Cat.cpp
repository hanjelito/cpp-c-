/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 02:16:19 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/27 22:49:26 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ): Animal("Cat"), _Brain(new Brain)
{
	cout << YELLOW << "Cat  was constructed" << WHITE << endl;
	this->beDeep();
}

Cat::Cat(const Cat &cat): Animal("Cat"), _Brain(new Brain)
{
	cout << YELLOW <<  "Cat Copy constructor called" << WHITE << endl;
	this->beDeep();
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
	delete this->_Brain;
	cout << YELLOW << "Cat is destroyed" << WHITE << endl;
}
//
void Cat::makeSound( void ) const
{
	cout << YELLOW << this->_Type << " Miauuuu" << WHITE << endl;
}

void Cat::beDeep() const
{
	cout << YELLOW << this->_Type << " is thinking: "  << this->_Brain->getIdeas() << WHITE << endl;
}
