/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 00:32:53 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/29 01:52:31 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{}

AMateria::AMateria(string const &type):_Type(type)
{}

AMateria::AMateria(AMateria const &other)
{
	*this = other;
}

AMateria &AMateria::operator=(AMateria const &other)
{
	this->_Type = other.getType();
	return (*this);
}

AMateria::~AMateria()
{
}
//
void AMateria::use(ICharacter &target)
{
	cout << target.getName() << endl;
}

//
string const &AMateria::getType() const
{
	return (this->_Type);
}
void AMateria::setType(string &type)
{
	this->_Type = type;
}
