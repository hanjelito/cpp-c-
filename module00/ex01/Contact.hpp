/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 04:02:17 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/02 04:35:44 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>


class Contact
{
	private:
		static int _index;
		int		_ID;
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nick_name;
		std::string	_phone;
		std::string	_darkest_secret;
	public:
		Contact();
		~Contact();
		void setFirstName(std::string first_name);
		void setLastName(std::string last_name);
		void setNickNamea(std::string nick_name);
		void setPhone(std::string phone);
		void setDarkestSecret(std::string darkest_secret);
		void indexID();
		int getID();
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getPhone() const;
		std::string getDarkestSecret() const;
		static void Add(std::string &value, std::string msg);
		void RequestData();
		void Print();
};

#endif