#include <iomanip>
#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"


int Contact::_index = 0;

void PhoneBook::PrintS(std::string str, int nosalt)
{
    (void)nosalt;
    std::cout << str;
}

void PhoneBook::PrintS(std::string str)
{
        std::cout << str << std::endl;
}

void PhoneBook::UserContact()
{
    int select;

    PrintS("\033[32mSelect a contact the table: \033[0m", 0);
    std::cin >> select;
    if (select > 0 && select < 9)
    {
        PrintS("\033[32mFirst Name:\033[0m " + (_contact + select - 1)->getFirstName());
        PrintS("\033[32mLast Name:\033[0m " + (_contact + select - 1)->getLastName());
        PrintS("\033[32mNickname:\033[0m " + (_contact + select - 1)->getNickName());
        PrintS("\033[32mPhone:\033[0m " + (_contact + select - 1)->getDarkestSecret());
        PrintS("\033[32mDarkest secret:\033[0m " + (_contact + select - 1)->getDarkestSecret());
    }
    else
        PrintS("\033[31mNumber out of range!\033[0m");
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
    UserContact();
}

void PhoneBook::Menu()
{
    std::string menu;

    while (1)
    {
        PrintS("");
        PrintS("************************");
        PrintS("Select ADD, SEARCH, EXIT");
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
