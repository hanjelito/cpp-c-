/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:54:40 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/04 18:34:45 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce(void);
        
};
Zombie *newZombie( std::string name );
void randomChump( std::string name );
#endif