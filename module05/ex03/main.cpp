/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 01:14:32 by juan-gon          #+#    #+#             */
/*   Updated: 2022/05/28 15:00:07 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main()
{
        Intern someRandomIntern;
        Form* rrf;
        Bureaucrat ba("Hermes Conrad", 34);
        
        /* ---> Right form <--- */
        try
        {
            rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        cout << *rrf << endl;
        ba.signForm(*rrf);
        ba.executeForm(*rrf);
        // delete rrf;
	    cout << std::endl;
	    /* ---> Wrong form <--- */
        try
        {
            rrf = someRandomIntern.makeForm("shrubbery creation", "Benders");
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
}
