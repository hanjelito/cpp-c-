/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:06:24 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/11 21:46:24 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>

class Fixed
{
	private:
		int _raw;
		static const  int _NumFractionalBits = 8;
	public:
		Fixed( void );
		Fixed( const int raw );
		Fixed( const float raw);
		Fixed( const Fixed &fixed);
		Fixed &operator=( const Fixed &fixed );
		~Fixed(void);
		float toFloat( void ) const;
		int toInt( void ) const;
		void setRawBits ( int const raw );
		int getRawBits( void ) const;
};

std::ostream &operator<<(std::ostream &o, const Fixed &fixed);

#endif
