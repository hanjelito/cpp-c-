/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 01:14:32 by juan-gon          #+#    #+#             */
/*   Updated: 2022/05/07 01:51:42 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat a("Morgan Freeman", 145);
	Bureaucrat b("Tom Holan", 21);
	Bureaucrat c("Vanessa Maer", 42);

	Form f("scobby", 146, 21);

	
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << f << endl;

	f.beSigned(a);
	return 0;
}
