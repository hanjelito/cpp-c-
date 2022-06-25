/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 11:19:48 by juan-gon          #+#    #+#             */
/*   Updated: 2022/06/25 16:02:03 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion( void ): _str(NULL)
{}

ScalarConversion::ScalarConversion(string const &string): _str(string)
{
	if(checkerStr())
	{
		cout <<  "char: " << static_cast <char> (this->_str.c_str()[0]) << endl;
	}
	else
	{
		try
		{
			int _chararcter =  static_cast <int> (std::stoi( this->_str));
			
			if (isprint(_chararcter))
				cout << "char: " << "'" << static_cast <char> (_chararcter) << "'" << endl;
			if (_chararcter <= 32 || _chararcter >= 127)
				cout << "char: " << "Non displayable" << endl;
		}
		catch(std::invalid_argument&)
		{
			cout << "char: " << "impossible" << endl;
		}
		catch (std::out_of_range&)
		{
			cout << "char: Non displayable" << endl;
		}
	}
	
}

ScalarConversion::ScalarConversion(ScalarConversion const &o): _str(o.getStr())
{
	*this = o;
}

ScalarConversion &ScalarConversion::operator=(ScalarConversion const &o)
{
	(void)o;
	return (*this);
}

ScalarConversion::~ScalarConversion( void )
{}
//
void ScalarConversion::printStr( void )
{
	this->getStr();
}

void ScalarConversion::printInt( void )
{
	setNumberInt(static_cast <int>  (std::stoi(this->_str)));
	cout << "int: " << getNumberInt() << endl; 
}

void ScalarConversion::printFloat( void )
{
	setNumberFloat(static_cast <float> (std::stof(this->_str)));
	cout << "float: " << getNumberFloat();
	if(this->getNumberFloat() == this->getNumberInt())
		cout << ".0";
	cout << "f" << endl;
}

void ScalarConversion::printDouble( void )
{
	setNumberDouble(static_cast <double> (std::stod(this->_str)));
	cout << "double: " << getNumberDouble();
	if(this->getNumberDouble() == this->getNumberInt())
		cout << ".0";
	cout << endl;
}

bool ScalarConversion::checkerStr( void ) const
{
	if ((this->getStr()).length() == 1 && std::isprint((this->getStr())[0]) && !std::isdigit((this->getStr())[0]))
		return (true);
	return (false);
}

// get and set
void ScalarConversion::setStr(string const &str)
{
	this->_str = str;
}

string ScalarConversion::getStr( void ) const
{
	return (this->_str);
}

void ScalarConversion::setNumberInt(int numberInt)
{
	this->_numberInt = numberInt;
}

int ScalarConversion::getNumberInt( void )
{
	return (this->_numberInt);
}

void  ScalarConversion::setNumberFloat(float numberFloat)
{
	this->_numberFloat = numberFloat;
}

float ScalarConversion::getNumberFloat( void )
{
	return (this->_numberFloat);
}

void ScalarConversion::setNumberDouble(double numberDouble)
{
	this->_numberDouble = numberDouble;	
}

double ScalarConversion::getNumberDouble( void )
{
	return (this->_numberDouble);
}
