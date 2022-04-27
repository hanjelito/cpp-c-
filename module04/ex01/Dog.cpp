/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:10:49 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/27 02:21:38 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal::Animal("Dog"), _Brain(new Brain)
{
    _Brain->setIdeas();
	this->beDeep();
    cout << BLUE << "Dog was constructed" << WHITE << endl;
}

Dog::Dog(const Dog &dog): Animal("Dog"), _Brain(new Brain)
{
    _Brain->setIdeas();
	this->beDeep();
    cout << BLUE  << "Dog Copy constructor called" << WHITE << endl;
    this->operator=(dog);
}

Dog &Dog::operator=(const Dog &dog)
{
    // this->_Type = dog._Type;
    // or
    this->setType(dog.getType());
    cout << BLUE  << "Dog " << this->_Type << "  cloned constructor" << WHITE << endl;
    return (*this);
}

Dog::~Dog()
{
    delete this->_Brain;
    cout << BLUE  << "Dog is destroyed" << WHITE << endl;
}

void  Dog::makeSound() const
{
    cout << BLUE  << this->_Type << " Guauuu" << WHITE << endl;
}

void Dog::beDeep() const
{
	cout << BLUE << this->_Type << this->_Brain->getIdeas() << WHITE << endl;
}
