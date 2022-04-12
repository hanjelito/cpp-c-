/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:22:04 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/12 03:15:27 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

using std::roundf;

Fixed::Fixed( void ) : _raw(0)
{
}

Fixed::Fixed(const int raw )
{
	this->_raw = (raw << this->_NumFractionalBits);
}

Fixed::Fixed(const float raw)
{
	this->_raw = roundf(raw * (1 << this->_NumFractionalBits));
}


Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	this->_raw = fixed.getRawBits();
	return *this;
}

Fixed::~Fixed( void )
{
}
// comparation operators
bool Fixed::operator>(const Fixed &fixed) const
{
	return (this->_raw > fixed._raw);
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return (this->_raw < fixed._raw);
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return (this->_raw >= fixed._raw);
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return (this->_raw <= fixed._raw);
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return (this->_raw == fixed._raw);
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return (this->_raw != fixed._raw);
}
// arithmetic operators
Fixed Fixed::operator+(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

//
Fixed &Fixed::operator++( void )
{
	++this->_raw;
	return *this;
}

Fixed &Fixed::operator--( void )
{
	--this->_raw;
	return *this;
}

Fixed Fixed::operator++( int )
{
	Fixed num = *this;

	++this->_raw;
	return num;
}

Fixed Fixed::operator--( int )
{
	Fixed num = *this;

	--this->_raw;
	return num;
}
//
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a >= b ? a : b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a <= b ? a : b);
}

const Fixed &Fixed::max( const Fixed &a, const Fixed &b )
{
	return (a >= b ? a : b);
}

const Fixed &Fixed::min( const Fixed &a, const Fixed &b )
{
	return (a <= b ? a : b);
}
//
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