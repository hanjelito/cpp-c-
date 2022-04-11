/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:22:04 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/11 22:04:54 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

using std::cout;
using std::endl;
using std::roundf;

Fixed::Fixed( void ) : _raw(0)
{
	cout << "Default constructor called" << endl;
}

Fixed::Fixed(const int raw )
{
	cout << "Int constructor called" << endl;	
	this->_raw = (raw << this->_NumFractionalBits);
}

Fixed::Fixed(const float raw)
{
	cout << "Float constructor called" << endl;
	this->_raw = roundf(raw * (1 << this->_NumFractionalBits));
}


Fixed::Fixed(const Fixed &fixed)
{
	cout << "Copy constructor called" << endl;
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	cout << "Assignation operator called" << endl;
	this->_raw = fixed.getRawBits();
	return *this;
}

Fixed::~Fixed( void )
{
	cout << "Destructor called" << endl;
}

void Fixed::setRawBits(int const raw)
{
	this->_raw = raw;
}

int Fixed::getRawBits( void ) const
{
	return (this->_raw);
}


float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_raw) / (1 << _NumFractionalBits));
}

int Fixed::toInt(void) const
{
	return (this->_raw >> _NumFractionalBits);
}

std::ostream &operator<<(std::ostream &o, const Fixed &fixed) {
    return (o << fixed.toFloat());
}