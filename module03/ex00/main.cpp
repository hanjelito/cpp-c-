/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:17:08 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/14 14:16:29 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main( void )
{
	ClapTrap Rocky;
	ClapTrap MrT;
	ClapTrap Drago("Drago");
	Rocky = ClapTrap("Rocky");
	ClapTrap Apolo(Drago);
	MrT = Drago;
	//

	Apolo.setName("Apolo");
	MrT.setName("MrT");
	
	Rocky.setAttackDamage(5);
	MrT.setAttackDamage(5);
	Drago.setAttackDamage(5);
	Apolo.setAttackDamage(2);
	
	
	cout << "Fight" << endl;
	//
	Drago.attack(Rocky.getName());
	Rocky.takeDamage(Drago.getAttackDamage());
	//
	Rocky.attack(Drago.getName());
	Drago.takeDamage(Rocky.getAttackDamage());
	//
	Apolo.attack(Rocky.getName());
	Rocky.takeDamage(Apolo.getAttackDamage());
	//
	MrT.attack(Rocky.getName());
	Rocky.takeDamage(MrT.getAttackDamage());
	//
	Rocky.beRepaired(6);
	Apolo.attack(Rocky.getName());
	Rocky.takeDamage(Apolo.getAttackDamage());
	
	cout << "Finish" << endl;
	return (0);
}
