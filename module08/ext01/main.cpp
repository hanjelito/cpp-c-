/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 23:47:52 by juan-gon          #+#    #+#             */
/*   Updated: 2022/07/26 10:02:54 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main( void )
{
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		//
		std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan: "<< sp.longestSpan() << std::endl;
	}
	{
		try
		{
			Span powCont(10000);
			std::vector <int>	aux;
			for( int i = 0; i < 10000 ; i++ )
			{
				aux.push_back(i * i);
			}
			powCont.addNumber(aux.begin(), aux.end());

			std::cout << "shortestSpan: " << powCont.shortestSpan() << std::endl;
			std::cout << "longestSpan: " << powCont.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		return (0);
	}
}
