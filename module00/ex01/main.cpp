/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 04:02:21 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/02 04:10:42 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "PhoneBook.hpp"

 int main()
 {
	PhoneBook *run = new PhoneBook();
	run->Menu();
	delete run;
	return (0); 
 }