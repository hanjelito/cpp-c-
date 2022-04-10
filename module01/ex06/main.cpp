/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 17:14:54 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/10 13:43:56 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		Karen karen;
		karen.karenFilter(argv[1]);

	} else {
		std::cout << "Error: a BUG example: DEBUG, INFO, WARNING, ERROR" << std::endl;
		std::cout << "./Karen <BUG>" << std::endl;
	}

    return (0);
}