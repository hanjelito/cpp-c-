/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:22:04 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/11 16:32:50 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>
#include <string>

using std::cout;
using std::endl;

Fixed::Fixed( void ): _raw(0)
{
   cout << "Default constructor called" << endl;
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
Fixed::~Fixed(void)
{
   cout << "Destructor called" << endl;
}

void Fixed::setRawBits ( int const raw )
{
   this->_raw = raw;
}

int Fixed::getRawBits( void ) const
{
   cout << "getRawBits member function called" << endl;
   return (this->_raw);
}