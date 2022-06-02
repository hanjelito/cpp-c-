/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:37:36 by juan-gon          #+#    #+#             */
/*   Updated: 2022/06/02 23:13:52 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERSION_HPP
#define SCALAR_CONVERSION_HPP

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class ScalarConversion
{
	private:
		string	_str;
		int		_numberInt;
		float	_numberFloat;
		double	_numberDouble;
	public:
		ScalarConversion( void );
		ScalarConversion(string const &string);
		ScalarConversion(ScalarConversion const &o);
		ScalarConversion &operator=(ScalarConversion const &o);
		~ScalarConversion( void );
		//
		void	printStr( void );
		void	printInt( void );
		void	printFloat( void );
		void	printDouble( void );
		bool	checkerStr( void ) const;
		// get and set
		void	setStr(string const &str);
		string	getStr(void) const;
		void	setNumberInt(int numberInt);
		int		getNumberInt( void );
		void	setNumberFloat(float numberFloat);
		float	getNumberFloat( void );
		void	setNumberDouble(double numberDouble);
		double	getNumberDouble( void );
};

#endif
