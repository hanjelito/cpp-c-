#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>


int Contact::_index = 0;

void PhoneBook::PrintS(std::string str)
{
    std::cout << str << std::endl;
}

void PhoneBook::Create(Contact *contact)
{   
    int i;

    i = contact->getID();
    (contact + (i % 8))->RequestData();
    contact->indexID();
}

void PhoneBook::Read(Contact *contact)
{
    headers();
    for(int i = 0; i < 8; i++)
    {
        PrintS((contact + i)->getFirstName());
    }
}

void PhoneBook::Menu()
{
    std::string menu;
    
    Contact *contact = new Contact[8];
    while (1)
    {
        PrintS("SELECT ADD, SEARCH, EXIT");
        std::cin >> menu;
        if (menu == "ADD")
            Create(contact);
        else if (menu == "SEARCH")
            Read(contact);
        else if (menu == "EXIT")
            break;
    }
}

void PhoneBook::headers()
{
    PrintS("+----------+----------+----------+----------+");
    PrintS("|    index |  f. name |  l. name | nickname |");
    PrintS("+----------+----------+----------+----------+");
}
