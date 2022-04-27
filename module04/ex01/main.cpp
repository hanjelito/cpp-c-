/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:17:08 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/27 02:36:57 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

using std::string;
using std::cout;
using std::endl;

int main()
{
	// {
	// 	const Animal* j = new Dog();
	// 	const Animal* i = new Cat();
	// 	delete j;//should not create a leak
	// 	delete i;
	// }
	{
		Animal **animals = new Animal *[100];
		for(int i = 0; i < 100; i++)
		{
			cout << "Animal[" << i << "]"<< endl;
			if(i%2  == 0)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
			cout << "**** end ****"<< endl;
		}
		for (int i = 0; i < 100; i++)
		{
			cout << "******delete[" << i <<"]******" << endl;
			delete animals[i];
		}
		delete []animals;
		return (0);
	}
}
