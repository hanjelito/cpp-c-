/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 11:04:50 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/24 14:13:02 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("Cat")
{
	cout << this->_Type << "Create Constructor" << endl;
}

WrongCat::WrongCat(const WrongCat &wrongcat)
{
	cout << this->_Type << " as copy constructor";
	this->operator=(wrongcat);
}

WrongCat &WrongCat::operator=(const WrongCat &wrongcat)
{
	this->_Type = wrongcat.getType();
	cout << this->_Type << "as cloned constructor" << endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	cout << this->getType() << " as destroyed" << endl;
}
//
void WrongCat::makeSound() const
{
	 cout << this->_Type << "beeeeee " << endl;
}
//
void WrongCat::setType(string Type) 
{
	this->_Type = Type;
}

string WrongCat::getType() const
{
	return (this->_Type);
}
