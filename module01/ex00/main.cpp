/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 00:59:59 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/05 01:45:34 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main(void)
{
    Zombie *first = newZombie("first");
    first->announce();
    delete first;

    Zombie midle = Zombie("david");
    midle.announce();

    randomChump("last");    
    return (0);
}