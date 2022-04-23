/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 11:46:16 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/24 01:02:04 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Animal
{
	protected:
		string _Type;
	public:
		Animal( void );
		Animal(const string Type);
		Animal(const Animal &animal);
		Animal &operator=(const Animal &animal);
		virtual ~Animal( void );
		virtual void makeSound(void) const;
		void setType(const string Type);
		string getType( void ) const;
};

#endif
