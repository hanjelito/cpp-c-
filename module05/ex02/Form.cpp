/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 23:52:20 by juan-gon          #+#    #+#             */
/*   Updated: 2022/05/28 01:19:25 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( void ):
	_Name("NoName"),
	_isSigned(false),
	_GradeSign(MIN_GRADE),
	_GradeExecute(MIN_GRADE)
{}

Form::Form(string name, int gradeSign, int gradeExecute):
	_Name(name),
	_isSigned(false),
	_GradeSign(gradeSign),
	_GradeExecute(gradeExecute)
{
	checkGrade(this->_GradeSign);
	checkGrade(this->_GradeExecute);
}

Form::Form(Form const &form):
	_Name(form._Name),
	_isSigned(false),
	_GradeSign(form._GradeSign),
	_GradeExecute(form._GradeExecute)
{
	*this = form;
}

Form &Form::operator=(Form const &form)
{
	this->_isSigned = form._isSigned;
	return (*this);
}

Form::~Form( void )
{}
//
string Form::getName( void ) const
{
	return (this->_Name);
}

int Form::getGradeSign( void ) const
{
	return (this->_GradeSign);
}

int Form::getGradeExecute( void ) const
{
	return (this->_GradeExecute);
}

bool Form::getisSigned( void ) const
{
	return (this->_isSigned);
}

void Form::setisSigned(bool isSigned)
{
	this->_isSigned = isSigned;
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	cout << GREEN << "ENTRO" << WHITE << endl;
	if(this->_isSigned)
	{
		cout << GREEN << "Form already signed" << WHITE << endl;
		return;
	}
	if(this->_GradeSign < bureaucrat.getGrade())
	{
		cout << GREEN << "The bureaucrat too low grade to sign the form" << WHITE << endl;
		throw GradeTooLowException();
	}
	cout	<< GREEN << "Bureaucrat " << bureaucrat.getName() << " grade: " << bureaucrat.getGrade()
			<< " has signed Form" << this->_Name << " grade: " << this->_GradeSign
			<< WHITE << endl;
	this->setisSigned(true);

}

void Form::checkGrade(int const &grade) const
{
    if (grade < MAX_GRADE)
        throw GradeTooHighException();
    if (grade > MIN_GRADE)
        throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &o, const Form &Form)
{
    o << GREEN << "Form " << Form.getName() << ". "
      << "status: ( signed: " << std::boolalpha << Form.getisSigned() << ", "
      << "gradeToSign: " << Form.getGradeSign() << ", gradeToExec: " << Form.getGradeExecute()
      << " )" << WHITE;
    return (o);
}
