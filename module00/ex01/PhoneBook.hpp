/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 04:02:38 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/02 04:02:42 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact  _contact[8];
    public:
        PhoneBook()
        {
        }
        ~PhoneBook()
        {
        }
        void PrintS(std::string str);
        void PrintS(std::string str, int salt);
        void UserContact();
        void Add(void);
        void Read(void);
        void Menu(void);
        void headers(void);
        std::string FormatText(std::string str);
};

#endif
