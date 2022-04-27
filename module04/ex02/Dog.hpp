/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:04:52 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/27 00:40:09 by juan-gon         ###   ########.fr       */
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
	private:
		Brain	*_Brain;
	public:
		Dog( void );
		Dog(const Dog &dog);
		Dog &operator=(const Dog &dog);
		~Dog();
		void makeSound( void ) const;
		void beDeep( void ) const ;
};

#endif
