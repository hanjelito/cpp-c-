/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 14:16:11 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/21 00:00:59 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

using std::string;

class ScavTrap: public ClapTrap
{
    public:
        ScavTrap( void );
        ScavTrap( const string Name );
        ScavTrap( const ScavTrap &scavtrap );
        ScavTrap &operator=( const ScavTrap &scavtrap );
        ~ScavTrap( void );

        // void setName(string Name);
        void attackScav(const string &target);
        void takeDamageScav(unsigned int amount);
        void beRepairedScav(unsigned int amount); 
        void guardGate( void );
        //
        void setNameScav(string Name);
        string getNameScav( void );
};

#endif