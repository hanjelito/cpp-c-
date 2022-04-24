/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 18:03:57 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/24 22:48:30 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat( void );
		WrongCat(const WrongCat &wrongcat);
		WrongCat &operator=(const WrongCat &wrongcat);
		~WrongCat();
		//
		void makeSound( void ) const;
		//
		void setType(string Type);
		string getType( void ) const;
};

#endif
