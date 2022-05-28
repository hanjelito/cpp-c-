/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 01:14:32 by juan-gon          #+#    #+#             */
/*   Updated: 2022/05/28 12:45:52 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    {
        cout << "PresidentialPardonForm" << endl;
        PresidentialPardonForm x;
        std::cout << x << std::endl;

        PresidentialPardonForm y(x);
        std::cout << y << std::endl;

        Bureaucrat pro("Napoleon", 1);
        PresidentialPardonForm z("Ring");
        pro.signForm(z);
        pro.executeForm(z);
        std::cout << "original :" << z << std::endl;
        x = z;
        std::cout << "after assign :" << x << std::endl;
        x.execute(pro);
    }
    {
        PresidentialPardonForm a("Nixon");
        Bureaucrat b("Nelson", 5);

        b.executeForm(a);
        std::cout << a << std::endl;

        a.beSigned(b);
        a.execute(b);

        Bureaucrat demo1("reagan", 6);
        demo1.executeForm(a);

        try
        {
            a.execute(demo1);
        }
        catch (std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    {
        cout << "ShrubberyCreationForm" << endl;
        ShrubberyCreationForm c("Noel");
        Bureaucrat d("Rodolfo", 137);

        d.executeForm(c);
        std::cout << c << std::endl;

        c.beSigned(d);
        c.execute(d);

        Bureaucrat demo2("Mother Noel", 138);
        demo2.executeForm(c);
        try
        {
            c.execute(demo2);
        }
        catch (std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    {
        cout << "RobotomyRequestForm" << endl;
        RobotomyRequestForm e("Studen42");
        Bureaucrat f("Marvin", 45);

        f.executeForm(e);
        std::cout << e << std::endl;

        e.beSigned(f);
        e.execute(f);

        Bureaucrat demo2("Poolman", 46);
        demo2.executeForm(e);
        try
        {
            e.execute(demo2);
        }
        catch (std::exception &e)
        {
           std::cerr << e.what() << '\n';
        }

        return (0);
    }
}
