#include "Contact.hpp"

static  void Add(std::string &value, std::string msg)
{
    std::string temp;
    std::cout << msg;
    std::cin >> temp;
    value = temp;
}
void Contact::RequestData()
{
    Add(_first_name, "Insert your First Name: ");
    Add(_last_name, "Insert your Last Name: ");
    Add(_nick_name, "Insert your Nick Name: ");
    Add(_phone, "Insert your Phone: ");
    Add(_darkest_secret, "Insert your Darkest Secret: ");
}