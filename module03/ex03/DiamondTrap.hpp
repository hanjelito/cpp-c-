/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 01:16:45 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/21 10:50:06 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

using std::cout;
using std::endl;
using std::string;

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		string _Name;
	public:
		DiamondTrap( void );
		DiamondTrap(string const Name);
		DiamondTrap(DiamondTrap const &diamondtrap);
		DiamondTrap &operator=(DiamondTrap const &diamondtrap);
		~DiamondTrap();

		void attack(const string Name);
		void whoAmI();
		void setName(string Name);
		string const getName( void );
};

#endif
