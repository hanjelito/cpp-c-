/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 22:58:44 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/14 03:23:22 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class ClapTrap
{
	private:
		// HitPoints -> Puntos de golpe
		// EnergyPoints -> Puntos de Energía
		// AttackDamage -> Daño de ataque
		string	_Name;
		int		_HitPoints;
		int		_EnergyPoints;
		int		_AttackDamage;
	public:
		ClapTrap( void );
		ClapTrap( const string Name);
		ClapTrap( const ClapTrap &claptrap);
		ClapTrap &operator=(const ClapTrap &claptrap );
		~ClapTrap( void );
		//
		// attack -> ataque
		// recibir daño -> takeDamage
		// ser reparado -> beRepaired
		void	attack(string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		//
		void	setName(string Name);
		void	setHitPoints(int HitPoints);
		void	setEnergyPoints(int EnergyPoints);
		void	setAttackDamage(int AttackDamage);
		//
		string	getName( void );
		int 	getHitPoints( void );
		int 	getEnergyPoints( void );
		int		getAttackDamage( void );
};

#endif