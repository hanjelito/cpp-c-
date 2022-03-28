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
