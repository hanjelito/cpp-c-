/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 04:02:10 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/02 04:02:12 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

static  void Add(std::string &value, std::string msg)
{
    std::string temp;
    std::cout << msg;
    std::getline(std::cin, temp);
    value = temp;
}
void Contact::Print()
{
    std::cout << getFirstName() <<std::endl;
}

void Contact::RequestData()
{
    std::cin.ignore(100, '\n');
    Add(_first_name, "Insert your First Name: ");
    Add(_last_name, "Insert your Last Name: ");
    Add(_nick_name, "Insert your Nick Name: ");
    Add(_phone, "Insert your Phone: ");
    Add(_darkest_secret, "Insert your Darkest Secret: ");
}
