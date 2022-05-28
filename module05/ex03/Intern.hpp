/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 13:00:59 by juan-gon          #+#    #+#             */
/*   Updated: 2022/05/28 14:41:00 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    private:
        Form* makeCreation(string const & target);
        Form* makeRequest(string const & target);
        Form* makePardon(string const & target);
    public:
        Intern( void );
        Intern(Intern const &other);
        Intern &operator=(Intern const &oter);
        ~Intern( void );
        //
        Form *makeForm( string const & nameForm, string const & targetName );
        
        // class MakeFormException : public Bureaucrat::GradeTooHighException
        class MakeFormException : public std::exception
        {
            public:
                    virtual const char * what() const throw ();
        };
};

#endif
