/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 02:28:11 by juan-gon          #+#    #+#             */
/*   Updated: 2022/07/26 00:38:16 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <algorithm>
#include <exception>
#include <string>
#include <vector>
#include <list>

class Span
{
	private:
		unsigned int _size;
		std::vector<int> _container;
		Span( void );
	public:
		Span(unsigned int size);
		Span( Span const &o);
		Span &operator=( Span const &o);
		~Span( void );
		//
		void addNumber(int num);
		int shortestSpan( void );
		int longestSpan( void );
		
		class SearchFailed : public std::exception
		{
			public:
					virtual const char *what() const throw ();
		};

		class FilledUp : public std::exception
		{
			public:
					virtual const char *what() const throw ();
		};
};

#endif
