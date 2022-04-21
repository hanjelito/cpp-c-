/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:17:08 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/21 11:47:30 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

int main( void )
{
	DiamondTrap Rocky;
	DiamondTrap MrT;
	DiamondTrap Drago("Drago");
	Rocky = DiamondTrap("Rocky");
	DiamondTrap Apolo(Drago);
	MrT = Drago;
	//

	Apolo.setName("Apolo");
	MrT.setName("MrT");
	
	
	cout << "Fight" << endl;
	//
	cout <<  Rocky.getName() << endl;
	Drago.attack(Rocky.getName());
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
	
	Rocky.beRepaired(30);
	Apolo.attack(Rocky.getName());
	Rocky.takeDamage(Apolo.getAttackDamage());
	cout << "Finish" << endl;
	return (0);
}
