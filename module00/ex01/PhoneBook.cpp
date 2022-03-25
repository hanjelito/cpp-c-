#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>


void PhoneBook::create()
{
    int i;
    std::string menu;
    Contact *contact = new Contact[8];

    i = 1;
    while(1)
    {
        std::cout << "SELECT ADD, SEARCH, EXIT" << std::endl;
        std::cin >> menu;
        if(menu == "ADD")
            (contact + (i % 8) - 1)->RequestData();
        else if(menu == "SEARCH")
            break;
        else if(menu == "EXIT")
            break;
    }
}