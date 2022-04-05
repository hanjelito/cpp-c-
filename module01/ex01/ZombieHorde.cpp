/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 02:00:29 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/05 02:26:38 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
	Zombie *zombies = new Zombie[N];
	
	for(int i = 0; i < N; i++)
		zombies[i].setName("[" + std::to_string(i) + name + "]");
	return (zombies);
}
