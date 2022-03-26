#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>


int Contact::_index = 0;
void PhoneBook::Create(Contact *contact)
{   
    int i;

    i = contact->getID();
    (contact + (i % 8))->RequestData();
    contact->indexID();
}

void PhoneBook::Read(Contact *contact)
{
    std::cout << "|    index |  f. name |  l. name | nickname |" << std::endl;
    for(int i = 0; i < 8; i++)
    {
        std::cout << (contact + i)->getFirstName() << std::endl;
    }
}

void PhoneBook::Menu()
{
    Contact *contact = new Contact[8];
    std::string menu;
    while (1)
    {
        std::cout << "SELECT ADD, SEARCH, EXIT" << std::endl;
        std::cin >> menu;
        if (menu == "ADD")
            Create(contact);
        else if (menu == "SEARCH")
            Read(contact);
        else if (menu == "EXIT")
            break;
    }
}
