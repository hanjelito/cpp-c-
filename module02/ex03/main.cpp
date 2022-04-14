/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:17:08 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/14 04:16:07 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main( void )
{
	ClapTrap Mecano;
	ClapTrap solid("Ken");
	Mecano = ClapTrap("Mecano");
	ClapTrap fan(solid);

	solid.attack("ataque1");
	fan.attack("ataque2");
	Mecano.attack("ataque3");
	return (0);
}
