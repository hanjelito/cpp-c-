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
		Contact()
		{
			this->_index = this->_ID;
		}
		~Contact()
		{
		}
		void setFirstName(std::string first_name)
		{
			this->_first_name = first_name;
		}
		void setLastName(std::string last_name)
		{
			this->_last_name = last_name;
		}
		void setNickNamea(std::string nick_name)
		{
			this->_nick_name = nick_name;
		}
		void setPhone(std::string phone)
		{
			this->_phone = phone;
		}
		void setDarkestSecret(std::string darkest_secret)
		{
			this->_darkest_secret = darkest_secret;
		}
		void indexID()
		{	
			this->_ID++;
		}
		int getID()
		{
			this->_index = this->_ID;
			return this->_ID;
		}
		std::string getFirstName() const
		{
			return this->_first_name;
		}
		std::string getLastName() const
		{
			return this->_last_name;
		}
		std::string getNickName() const
		{
			return this->_nick_name;
		}
		std::string getPhone() const
		{
			return this->_phone;
		}
		std::string getDarkestSecret() const
		{
			return this->_darkest_secret;
		}
		void RequestData();
		void Print();
};

#endif