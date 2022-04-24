/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:04:52 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/25 00:20:54 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

using std::string;
using std::cout;
using std::endl;

class Dog: public Animal
{
	public:
		Dog( void );
		Dog(const Dog &dog);
		Dog &operator=(const Dog &dog);
		~Dog();
		void makeSound( void ) const;
};

#endif
