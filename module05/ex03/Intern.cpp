/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 13:00:50 by juan-gon          #+#    #+#             */
/*   Updated: 2022/05/28 15:10:31 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void )
{}

Intern::Intern(Intern const &other)
{
    *this = other;
}

Intern &Intern::operator=(Intern const &other)
{
    (void)other;
    return (*this);
}

Intern::~Intern( void )
{}
//
Form* Intern::makeCreation( std::string const & target )
{
	return (new ShrubberyCreationForm(target));
}

Form* Intern::makeRequest( std::string const & target )
{
	return (new RobotomyRequestForm(target));
}

Form* Intern::makePardon( std::string const & target )
{
	return (new PresidentialPardonForm(target));
}
//
const char* Intern::MakeFormException::what() const throw ()
{
	return "Error: Intern: MakeFormException";
}
//
 Form* Intern:: makeForm( std::string const & name_form, std::string const & target_name )
{
	Form* (Intern::*fPoint[3])(std::string const &) =
	{
		&Intern::makeCreation,
		&Intern::makeRequest,
		&Intern::makePardon
	};

	std::string const nameForm[3] = 
	{
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	for (size_t i = 0; i < 3; i++)
	{
		if (nameForm[i] == name_form)
			return (this->*fPoint[i])(target_name);
	}
	throw Intern::MakeFormException();
	return (0);
}
