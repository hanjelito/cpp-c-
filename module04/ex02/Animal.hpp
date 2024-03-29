/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 11:46:16 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/27 22:51:53 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

# define WHITE	"\033[0;37m"
# define YELLOW	"\033[1;33m"
# define GREEN	"\033[1;32m"
# define BLUE	"\033[1;34m"
# define RED	"\033[1;31m"
# define PINK	"\033[1;35m"
# define GRAY	"\033[1;30m"
# define CYAN	"\033[1;36m"

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
		virtual void makeSound(void) const = 0;
		virtual void beDeep(void) const;
		void setType(const string Type);
		string getType( void ) const;
};

#endif
