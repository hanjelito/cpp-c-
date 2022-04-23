/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:10:49 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/24 01:05:52 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal::Animal("Dog")
{
    cout << "Dog was constructed" << endl;
}

Dog::Dog(const Dog &dog)
{
    this->operator=(dog);
    cout << "Dog Copy constructor called" << endl;
}

Dog &Dog::operator=(const Dog &dog)
{
    // this->_Type = dog._Type;
    // or
    this->setType(dog.getType());
    cout << "Dog " << this->_Type << " assing constructor" << endl;
    return (*this);
}

Dog::~Dog()
{
    cout << "Dog is destroyed" << endl;
}

void  Dog::makeSound() const
{
    cout << this->_Type << " Guauuu" << endl;
}
