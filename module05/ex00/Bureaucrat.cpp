/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:44:18 by juan-gon          #+#    #+#             */
/*   Updated: 2022/05/04 16:52:05 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ): _Name("No name"), _Grade(MIN_GRADE)
{

}

Bureaucrat::Bureaucrat(string &Name, int Grade): _Name(Name), _Grade(Grade)
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat): _Name(bureaucrat.getName())
{
	this->_Grade = bureaucrat.getGrade();
	*this = bureaucrat;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &bureaucrat)
{
	this->_Grade = bureaucrat.getGrade();
	return (*this);
}
//
void Bureaucrat(int const )
{}
//
string const &Bureaucrat::getName( void ) const
{
	return (this->_Name);
}

int Bureaucrat::getGrade ( void ) const
{
	return (this->_Grade);
}
//
const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return "The grade is hight";
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return "The grade is down";
}