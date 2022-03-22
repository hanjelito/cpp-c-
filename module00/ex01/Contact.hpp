#include <iostream>

using std::string;

class Contact
{
	private:
		string	_first_name;
		string	_last_name;
		string	_nick_name;
		string	_phone;
		string	_darkest_secret;
	public:
		Contact(string first_name, string last_name, string nick_name, string phone, string darkest_secret)
		{
			_first_name = first_name;
			_last_name = last_name;
			_nick_name = nick_name;
			_phone = phone;
			_darkest_secret = darkest_secret;
		}
};