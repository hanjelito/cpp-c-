/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 23:47:52 by juan-gon          #+#    #+#             */
/*   Updated: 2022/07/26 02:12:17 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(): _size(0)
{
}

Span::Span(unsigned int size): _size(size)
{
}

Span::Span(Span const & other)
{
	*this = other;
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
	this->_container.clear();
}

void Span::addNumber(int num)
{
	if (this->_container.size() == this->_size)
		throw Span::FilledUp();
	this->_container.push_back(num);
}

int Span::shortestSpan( void )
{
	int diff;

	std::vector<int>::iterator begin = this->_container.begin();
	//
	diff = std::abs(*begin - *(begin + 1));
	while((begin + 1)  != this->_container.end())
	{
		if(std::abs(*begin - *(begin + 1)) < diff)
			diff = std::abs(*begin - *(begin + 1));
		++begin;
	}
	return diff;
}

int Span::longestSpan( void )
{
	int diff;

	std::vector<int>::iterator begin = this->_container.begin();
	//
	diff = std::abs(*begin - *(begin + 1));
	while((begin + 1)  != this->_container.end())
	{
		if(std::abs(*begin - *(begin + 1)) > diff)
			diff = std::abs(*begin - *(begin + 1));
		++begin;
	}
	return diff;
}

const char* Span::SearchFailed::what() const throw()
{
	return "SearchFailed: Not enough elements for span.";
}

const char* Span::FilledUp::what() const throw()
{
	return "FilledUp: Trying to add elements when is full.";
}
