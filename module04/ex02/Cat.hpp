/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 23:47:03 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/25 00:20:48 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

using std::string;
using std::cout;
using std::endl;

class Cat: public Animal
{
	public:
		Cat( void );
		Cat(const Cat &cat);
		Cat &operator=(const Cat &cat);
		~Cat();
		void makeSound( void ) const;
};

#endif