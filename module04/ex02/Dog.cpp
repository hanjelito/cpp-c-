/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:10:49 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/24 23:37:55 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal::Animal("Dog")
{
    cout << BLUE << "Dog was constructed" << WHITE << endl;
}

Dog::Dog(const Dog &dog)
{
    this->operator=(dog);
    cout << BLUE  << "Dog Copy constructor called" << WHITE << endl;
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
    cout << BLUE  << "Dog is destroyed" << WHITE << endl;
}

void  Dog::makeSound() const
{
    cout << BLUE  << this->_Type << " Guauuu" << WHITE << endl;
}
