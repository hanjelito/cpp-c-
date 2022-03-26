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
        void Create(Contact *contact);
        void Read(Contact *contact);
        void Menu();
};

#endif
