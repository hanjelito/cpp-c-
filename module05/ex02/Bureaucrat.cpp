/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:44:18 by juan-gon          #+#    #+#             */
/*   Updated: 2022/05/23 23:16:28 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat( void ): _Name("No-name"), _Grade(MIN_GRADE)
{
}

Bureaucrat::Bureaucrat(string Name, int Grade): _Name(Name), _Grade(Grade)
{
	checkGrade(this->_Grade);
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

Bureaucrat::~Bureaucrat( void ) {}
//
void Bureaucrat::upGrade( void )
{
	checkGrade(this->_Grade - 1);
	this->_Grade--;
}

void Bureaucrat::downGrade( void )
{
	checkGrade(this->_Grade + 1);
	this->_Grade++;
}

void Bureaucrat::checkGrade(int const &grade) const
{
	if(grade > MIN_GRADE)
		throw GradeTooHighException();
	if(grade < MAX_GRADE)
		throw GradeTooLowException();
}
//
void Bureaucrat::setGrade(int const &grade)
{
	checkGrade(grade);
	this->_Grade = grade;
}

string const &Bureaucrat::getName( void ) const
{
	return (this->_Name);
}

int Bureaucrat::getGrade ( void ) const
{
	return (this->_Grade);
}

void Bureaucrat::signForm(Form &form)
{
    if (form.getisSigned())
    {
        cout << RED << "Form already signed" << WHITE << endl;
        return;
    } 
    if (this->_Grade > form.getGradeSign())
    {
        cout << RED << "Bureaucrat " << this->_Name << " (grade: " << this->_Grade << ") "
                  << "cannot sign form " << form.getName() << " (grade: " << form.getGradeSign() << ") "
                  << "Grade too low" << WHITE << endl;
        return;
    }
    form.beSigned(*this);
    return;
}
//
void Bureaucrat::executeForm(Form const &form)
{
    if(!(form.getisSigned()))
    {
        cout << this->getName() << " Form is not signed" << endl;
        return;
    }
    try
    {
        form.execute(*this);
        cout << this->getName() << " has executed " << form.getName() << "." << endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

//
const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return "The grade is GradeTooHighException";
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return "The grade is GradeTooHighException";
}

std::ostream &operator<<(std::ostream &o, Bureaucrat &rhs)
{
    o << RED << rhs.getName() << ", bureaucrat : grades " << rhs.getGrade() << WHITE;
    return (o);
}
