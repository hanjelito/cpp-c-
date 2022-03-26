#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

using std::string;

class Contact
{
	private:
		static int _index;
		int		_ID;
		string	_first_name;
		string	_last_name;
		string	_nick_name;
		string	_phone;
		string	_darkest_secret;
	public:
		Contact()
		{
			this->_index = this->_ID;
		}
		~Contact()
		{
		}
		void setFirstName(string first_name)
		{
			this->_first_name = first_name;
		}
		void setLastName(string last_name)
		{
			this->_last_name = last_name;
		}
		void setNickNamea(string nick_name)
		{
			this->_nick_name = nick_name;
		}
		void setPhone(string phone)
		{
			this->_phone = phone;
		}
		void setDarkestSecret(string darkest_secret)
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
		string getFirstName() const
		{
			return this->_first_name;
		}
		string getLastName() const
		{
			return this->_last_name;
		}
		string getNickName() const
		{
			return this->_nick_name;
		}
		string getPhone() const
		{
			return this->_phone;
		}
		string getDarkestSecret() const
		{
			return this->_darkest_secret;
		}
		void RequestData();
		void Print();
		// void Add();
};

#endif