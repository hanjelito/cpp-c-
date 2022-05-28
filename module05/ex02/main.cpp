/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 01:14:32 by juan-gon          #+#    #+#             */
/*   Updated: 2022/05/28 01:58:07 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void print(std::string str)
{
    std::cout << str << std::endl;
    return;
}

int main(void)
{
    {
        print("\n** Basic Constructor");
        PresidentialPardonForm x;
        std::cout << x << std::endl;
        print("\n** Copy Constructor");
        PresidentialPardonForm y(x);
        std::cout << y << std::endl;
        print("\n** Assignment");
        Bureaucrat pro("pro", 1);
        PresidentialPardonForm z("target");
        pro.signForm(z);
        pro.executeForm(z);
        std::cout << "original     :" << z << std::endl;
        x = z;
        std::cout << "after assign :" << x << std::endl; // show signed and target changed
        x.execute(pro);
    }
    {
        PresidentialPardonForm a("bubbles the elephant");
        Bureaucrat b("hamilton", 5);

        b.executeForm(a);
        std::cout << a << std::endl;

        a.beSigned(b);
        a.execute(b);

        Bureaucrat noob1("noober 1", 6);
        noob1.executeForm(a);
        try
        {
            a.execute(noob1);
        }
        catch (std::exception &e)
        {
            print(e.what());
        }
    }
    {
        ShrubberyCreationForm c("santa");
        Bureaucrat d("rudolph", 137);

        d.executeForm(c);
        std::cout << c << std::endl;

        c.beSigned(d);
        c.execute(d);

        Bureaucrat noob2("noober 2", 138);
        noob2.executeForm(c);
        try
        {
            c.execute(noob2);
        }
        catch (std::exception &e)
        {
            print(e.what());
        }
    }
    {
        RobotomyRequestForm e("student");
        Bureaucrat f("professor", 45);

        f.executeForm(e);
        std::cout << e << std::endl;

        e.beSigned(f);
        e.execute(f);

        Bureaucrat noob3("noober 3", 46);
        noob3.executeForm(e);
        try
        {
            e.execute(noob3);
        }
        catch (std::exception &e)
        {
            print(e.what());
        }

        return (0);
    }
}
