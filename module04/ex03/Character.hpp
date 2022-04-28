/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 01:28:53 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/29 01:56:51 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CPP
#define CHARACTER_CPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

using std::string;
using std::cout;
using std::endl;

class Character: public ICharacter
{
	private:
		string	_Name;
		AMateria *_Slot[4];
		int		_SizeSlot;
	public:
		Character( void );
		Character(string const Name);
		Character(const Character &target);
		Character &operator=(const Character &other);
		~Character();
		//
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
		//
		void setName( string const &Name );
		string const &getName( void ) const;
};

#endif
