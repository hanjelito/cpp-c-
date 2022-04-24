/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 11:04:50 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/24 23:43:38 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("Cat")
{
	cout << YELLOW << this->_Type << " Create Constructor" << WHITE << endl;
}

WrongCat::WrongCat(const WrongCat &wrongcat)
{
	cout << YELLOW << this->_Type << " as copy constructor" << WHITE << endl;
	this->operator=(wrongcat);
}

WrongCat &WrongCat::operator=(const WrongCat &wrongcat)
{
	this->_Type = wrongcat.getType();
	cout << YELLOW << this->_Type << " as cloned constructor" << WHITE << endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	cout << YELLOW << this->getType() << " as destroyed" << WHITE << endl;
}
//
void WrongCat::makeSound() const
{
	 cout << YELLOW << this->_Type << " Memememeooooouuuuuuu" << WHITE << endl;
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
