#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
    public:
        PhoneBook()
        {
        }
        ~PhoneBook()
        {
        }
        void PrintS(std::string str);
        void Create(Contact *contact);
        void Read(Contact *contact);
        void Menu();
        void headers();
};

#endif
