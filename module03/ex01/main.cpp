/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:17:08 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/20 01:10:21 by juan-gon         ###   ########.fr       */
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
	// //

	Apolo.setNameScav("Apolo");
	MrT.setNameScav("MrT");
	
	
	cout << "Fight" << endl;
	//
	Drago.attackScav(Rocky.getName());
	Rocky.takeDamageScav(Drago.getAttackDamage());
	//
	Rocky.attackScav(Drago.getName());
	Drago.takeDamageScav(Rocky.getAttackDamage());
	//
	Apolo.attackScav(Rocky.getName());
	Rocky.takeDamageScav(Apolo.getAttackDamage());
	//
	MrT.attackScav(Rocky.getName());
	Rocky.takeDamageScav(MrT.getAttackDamage());
	//
	Rocky.beRepairedScav(30);
	Apolo.attackScav(Rocky.getName());
	Rocky.takeDamageScav(Apolo.getAttackDamage());
	
	Rocky.guardGate();
	cout << "Finish" << endl;
	return (0);
}
