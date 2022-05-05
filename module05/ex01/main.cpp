/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 08:56:20 by juan-gon          #+#    #+#             */
/*   Updated: 2022/05/05 12:56:55 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
	//example1
	Bureaucrat a;
	Bureaucrat b("Angel", 150);
	a = b;
	cout << a << endl;
	cout << b << endl;

	Bureaucrat c(b);
	a.setGrade(40);
	cout << "END\n\n" << endl;
	//
	//end example2
	Bureaucrat *multi = new Bureaucrat[30];
	for (size_t i = 0; i < 30; i++)
	{
		int ran = rand() % 160 + 1;
		try
		{
			multi[i].setGrade(ran);
			cout << multi[i] << endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	
	delete []multi;
	return (0);
}
