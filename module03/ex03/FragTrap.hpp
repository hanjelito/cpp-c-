/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:14:09 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/21 00:46:10 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

using std::string;
using std::cout;
using std::endl;

class FragTrap: public ClapTrap
{
	public:
		FragTrap( void );
		FragTrap(string const &Name);
		FragTrap(FragTrap const &fragtrap);
		FragTrap &operator=(FragTrap const &fragtrap);
		~FragTrap();

		void attackFrag(const string &target);
		void takeDamageFrag(unsigned int amount);
		void beRepairedFrag(unsigned int amount); 
		void highFivesGuys(void);
	
};

#endif