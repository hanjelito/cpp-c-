/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 01:00:22 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/05 01:53:26 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie( void )
{
}

Zombie::Zombie( std::string name ) : _name(name)
{
}

Zombie::~Zombie()
{
    std::cout << this->_name  << " died." << std::endl;
}

void Zombie::announce( void ) const
{
    std::cout << this->_name  << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName( std::string name )
{
    this->_name = name;
}
