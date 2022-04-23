/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:17:08 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/23 12:56:23 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main( void )
{
	ScavTrap Rocky;
	ScavTrap MrT;
	ScavTrap Drago("Drago");
	Rocky = ScavTrap("Rocky");
	ScavTrap Apolo(Drago);
	MrT = Drago;
	//
	Apolo.setName("Apolo");
	MrT.setName("MrT");
	
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
	Rocky.beRepaired(30);
	Apolo.attack(Rocky.getName());
	Rocky.takeDamage(Apolo.getAttackDamage());
	
	Rocky.guardGate();
	cout << "Finish" << endl;
	return (0);
}
