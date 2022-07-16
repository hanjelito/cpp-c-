/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:49:46 by juan-gon          #+#    #+#             */
/*   Updated: 2022/07/16 02:01:21 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <string>
#include <vector>
#include <list>

class EasyNoFound : public std::exception
{
	virtual const char* what() const throw ()
	{
		return "Number is not in the container";
	}
};

template <typename T>
void easyFind(T &container, int const &n)
{
	try
	{
		typename T::iterator i;
		i = std::find(container.begin(), container.end(), n);
		if(i == container.end())
			throw::EasyNoFound();
		std::cout << "The number " << n << " is correct" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

#endif
