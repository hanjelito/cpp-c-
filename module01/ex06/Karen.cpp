/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:42:29 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/10 14:02:30 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
}

Karen::~Karen()
{
}

void Karen::karenFilter(std::string bug)
{
	int i;
	const std::string msg[4] = {
        "DEBUG", "INFO", "WARNING", "ERROR"
    };
	
	for(i = 0; i < 4; i++)
	{
		if(bug == msg[i])
			break;
	}
    switch (i)
	{
	case 0:
		complain(i);
		break;
	case 1:
		complain(i);
		break;
	case 2:
		complain(i);
		break;
	case 3:
		complain(i);
		break;
	default:
		std::cout << "Comand no register" << std::endl;
	}
}

void Karen::complain( int level )
{
	const FuncList msg[4] = {
		{ "DEBUG", &Karen::debug },
		{ "INFO", &Karen::info },
		{ "WARNING", &Karen::warning },
		{ "ERROR", &Karen::error }
	};
	void (Karen::*f)(void) = msg[level].f;
	(this->*f)();
}

void Karen::debug( void )
{
    std::cout << "DEBUG: I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!." << std::endl;
}
void Karen::info( void )
{
    std::cout << "INFO: I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!." << std::endl;
}
void Karen::warning( void )
{
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}
void Karen::error( void )
{
    std::cout << "ERROR: This is unacceptable, I want to speak to the manager now." << std::endl;
}
