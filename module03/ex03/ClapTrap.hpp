/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 22:58:44 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/21 11:51:21 by juan-gon         ###   ########.fr       */
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
	protected:
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
