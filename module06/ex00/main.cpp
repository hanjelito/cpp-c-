/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:23:04 by juan-gon          #+#    #+#             */
/*   Updated: 2022/06/25 15:49:37 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

int main(int argc, char **argv)
{
	(void)argv;
	if(argc != 2)
	{
		cout << "error parameter" << endl;
		return (0);
	}
	ScalarConversion n(argv[1]);
	n.printStr();
	n.printInt();
	n.printFloat();
	n.printDouble();
	return (0);
}
