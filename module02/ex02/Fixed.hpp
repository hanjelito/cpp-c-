/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:06:24 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/12 02:42:46 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>

using std::ostream;

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
		// comparation operators
		bool operator>(const Fixed &fixed) const;
		bool operator<(const Fixed &fixed) const;
		bool operator>=(const Fixed &fixed) const;
		bool operator<=(const Fixed &fixed) const;
		bool operator==(const Fixed &fixed) const;
		bool operator!=(const Fixed &fixed) const;
		// arithmetic operators
		Fixed operator+(const Fixed &fixed) const;
		Fixed operator-(const Fixed &fixed) const;
		Fixed operator*(const Fixed &fixed) const;
		Fixed operator/(const Fixed &fixed) const;
		//
		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);
		//
		static Fixed &max( Fixed &a, Fixed &b );
		static Fixed &min( Fixed &a, Fixed &b );
		static const Fixed &max( const Fixed &a, const Fixed &b );
		static const Fixed &min( const Fixed &a, const Fixed &b );
		//
		float toFloat( void ) const;
		int toInt( void ) const;
		void setRawBits ( int const raw );
		int getRawBits( void ) const;
};

std::ostream &operator<<(std::ostream &o, const Fixed &fixed);

#endif
