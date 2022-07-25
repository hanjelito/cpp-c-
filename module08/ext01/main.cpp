/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 12:06:00 by juan-gon          #+#    #+#             */
/*   Updated: 2022/07/25 02:12:17 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span( void ): _size(0)
{}

Span::Span(int unsigned num): _size(num)
{}

Span::Span( Span const &o)
{
	*this = o;
}

Span &Span::operator=( Span const &o)
{
	if(this != &o)
	{
		this->_size = o._size;
		this->_container.clear();
		this->_container = o._container;
	}
	return (*this);
}

Span::~Span( void )
{
	this->_container.size();
}

void Span::addNumber(int num)
{
	if (this->_container.size() == this->_size)
		throw Span::FilledUp();
	this->_container.push_back(num);
}
