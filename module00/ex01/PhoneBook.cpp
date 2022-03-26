#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"


int Contact::_index = 0;

void PhoneBook::PrintS(std::string str)
{
    std::cout << str << std::endl;
}

void PhoneBook::Add()
{   
    int i;

    i = _contact->getID();
    (_contact + (i % 8))->RequestData();
    _contact->indexID();
}

void PhoneBook::Read()
{
    int select;
    headers();
    for(int i = 0; i < 8; i++)
    {
        std::cout << "|";
        std::cout << std::setw(10) << i + 1 << "|";
        std::cout << std::setw(10) << FormatText((_contact + i)->getFirstName()) << "|";
        std::cout << std::setw(10) << FormatText((_contact + i)->getLastName()) << "|";
        std::cout << std::setw(10) << FormatText((_contact + i)->getNickName()) << "|" << std::endl;
        PrintS("+----------+----------+----------+----------+");
    }
    PrintS("Select a contact the table");
    std::cin >> select - 1;
    std::cout << (_contact + select)->getFirstName() << std::endl;
}

void PhoneBook::Menu()
{
    std::string menu;

    while (1)
    {
        PrintS("************************");
        PrintS("SELECT ADD, SEARCH, EXIT");
        PrintS("************************");
        std::cin >> menu;
        if (menu == "ADD")
            Add();
        else if (menu == "SEARCH")
            Read();
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

std::string PhoneBook::FormatText(std::string str)
{
    std::string temp;
    if(str.length() > 10)
        temp = str.substr(0, 9) + ".";
    else
        temp  = str;
    return temp;
}
