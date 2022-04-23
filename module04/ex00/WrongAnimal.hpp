/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 15:44:24 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/22 15:56:52 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>
#include <string>

using std::string;

class WrongAnimal
{
	protected:
		string _Type;
	public:
		WrongAnimal( void );
		WrongAnimal(const string  Type);
		WrongAnimal(const WrongAnimal &animal);
		WrongAnimal &operator=(const WrongAnimal &animal);
		~WrongAnimal();
		void makeSound(void) const;
		void setType(string Type);
		string getType( void );
};

#endif
