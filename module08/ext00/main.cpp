/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 12:06:00 by juan-gon          #+#    #+#             */
/*   Updated: 2022/07/16 01:58:48 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"

int main( void )
{
	{
		std::list<int> data;

		data.push_back(1);
		data.push_back(2);
		data.push_back(3);
		data.push_back(4);
		data.push_back(5);
		data.push_back(6);
		//
		::easyFind(data, 7);
	}
	{
		std::vector<int> data;

		data.push_back(1);
		data.push_back(2);
		data.push_back(3);
		data.push_back(4);
		data.push_back(5);
		data.push_back(6);
		//
		::easyFind(data, 4);
	}
	
	return (0);
}

