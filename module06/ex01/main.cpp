/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 00:42:30 by juan-gon          #+#    #+#             */
/*   Updated: 2022/06/03 00:45:24 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <iostream>

typedef struct	Data
{
	int number;
}				Data;

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast <uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw) 
{
	return (reinterpret_cast <Data *>(raw));
}

using std::cout;
using std::endl;

int main (void)
{
	Data data; 
	Data *data2;

	data.number=12;
	uintptr_t dataSerialize = serialize(&data);
	data2 = deserialize(dataSerialize);
	cout << data2->number << endl;
	cout << data2 << endl;
	cout << &data << endl;
	cout << data.number << endl;
	
	return (0);
}
