/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 04:02:10 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/02 04:37:42 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    this->_index = this->_ID;
}

Contact::~Contact()
{
}

void Contact::Add(std::string &value, std::string msg)
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
    std::cin.ignore();
    Add(_first_name, "Insert your First Name: ");
    Add(_last_name, "Insert your Last Name: ");
    Add(_nick_name, "Insert your Nick Name: ");
    Add(_phone, "Insert your Phone: ");
    Add(_darkest_secret, "Insert your Darkest Secret: ");
}

void Contact::setFirstName(std::string first_name)
{
    this->_first_name = first_name;
}

void Contact::setLastName(std::string last_name)
{
    this->_last_name = last_name;
}

void Contact::setNickNamea(std::string nick_name)
{
    this->_nick_name = nick_name;
}

void Contact::setPhone(std::string phone)
{
    this->_phone = phone;
}

void Contact::setDarkestSecret(std::string darkest_secret)
{
    this->_darkest_secret = darkest_secret;
}

void Contact::indexID()
{	
    this->_ID++;
}

int Contact::getID()
{
    this->_index = this->_ID;
    return this->_ID;
}

std::string Contact::getFirstName() const
{
    return (this->_first_name);
}

std::string Contact::getLastName() const
{
    return (this->_last_name);
}

std::string Contact::getNickName() const
{
    return (this->_nick_name);
}

std::string Contact::getPhone() const
{
    return (this->_phone);
}

std::string Contact::getDarkestSecret() const
{
    return (this->_darkest_secret);
}
