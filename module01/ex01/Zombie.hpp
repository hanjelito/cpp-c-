/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:54:40 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/05 02:00:17 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
    private:
        std::string _name;
        
    public:
        Zombie( void );
        Zombie( std::string name );
        ~Zombie();
        void announce( void ) const;
        void setName(std::string name);
        
};

Zombie* zombieHorde( int N, std::string name );

#endif