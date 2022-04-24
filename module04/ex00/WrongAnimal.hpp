/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 15:44:24 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/24 23:32:35 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>
#include <string>

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

class WrongAnimal
{
	protected:
		string _Type;
	public:
		WrongAnimal( void );
		WrongAnimal(const string Type);
		WrongAnimal(const WrongAnimal &animal);
		WrongAnimal &operator=(const WrongAnimal &wronganimal);
		~WrongAnimal();
		void makeSound(void) const;
		void setType(string Type);
		string getType( void ) const ;
};

#endif
