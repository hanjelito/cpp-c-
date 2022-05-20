/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 01:14:32 by juan-gon          #+#    #+#             */
/*   Updated: 2022/05/17 19:13:13 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Bureaucrat a("Morgan Freeman", 145);
	Bureaucrat b("Tom Holan", 116);
	Bureaucrat c("Vanessa Maer", 42);

	Form f("scobby", 115, 21);

	
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << f << endl;

	try
	{
		cout << f.getGradeSign() << endl;
		cout << b.getGrade() << endl;
		b.signForm(f);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	//
	try
	{
		cout << f.getGradeSign() << endl;
		cout << c.getGrade() << endl;
		c.signForm(f);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
	return 0;
}
