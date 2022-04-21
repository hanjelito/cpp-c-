/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 14:16:11 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/21 10:46:33 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

using std::string;

class ScavTrap: virtual public ClapTrap
{
    public:
        ScavTrap( void );
        ScavTrap( const string Name );
        ScavTrap( const ScavTrap &scavtrap );
        ScavTrap &operator=( const ScavTrap &scavtrap );
        ~ScavTrap( void );

        void attack(const string &target);
        // void takeDamage(unsigned int amount);
        // void beRepaired(unsigned int amount); 
        void guardGate( void );
        //
        void setName(string Name);
        string getName( void );
};

#endif