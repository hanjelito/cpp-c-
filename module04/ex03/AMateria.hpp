/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 00:50:32 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/29 01:23:24 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CPP
#define AMATERIA_CPP

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class ICharacter;

class AMateria
{
	protected:
		string _Type;
	public:
		AMateria(  void );
		AMateria(std::string const &type);
		AMateria(AMateria const &other);
		AMateria &operator=(AMateria const &other);
		virtual ~AMateria();
		//
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
		//
		string const &getType() const; //Returns the materia type
		void setType(string &type);
};

#endif