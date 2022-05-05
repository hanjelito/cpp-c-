/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 23:52:20 by juan-gon          #+#    #+#             */
/*   Updated: 2022/05/06 01:12:46 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ): _Name("NoName"), _GradeSign(MIN_GRADE), _GradeExecute(MIN_GRADE)
{
	this->_isSigned = false;
}

Form::Form(string name, int gradeSign, int gradeExecute): _Name(name), _GradeSign(gradeSign), _GradeExecute(gradeExecute)
{
	checkGrade(this->_GradeSign);
	checkGrade(this->_GradeExecute);
	this->_isSigned = false;
}

Form::Form(Form const &form): _Name(form._Name), _GradeSign(form._GradeSign), _GradeExecute(form._GradeExecute)
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

int Form::getGradeSign( void )
{
	return (this->_GradeSign);
}

int Form::getGradeExecute( void )
{
	return (this->_GradeExecute);
}

bool Form::getisSigned( void )
{
	return (this->_isSigned);
}

void Form::setisSigned(bool isSigned)
{
	this->_isSigned = isSigned;
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if(this->_isSigned)
	{
		cout << "Form already signed" << endl;
		return;
	}
	if(this->_GradeSign < bureaucrat.getGrade())
	{
		cout << "The bureaucrat too low grade to sign the form" << endl;
		throw GradeTooLowException();
	}
	cout	<< "Bureaucrat " << bureaucrat.getName() << " grade :" << bureaucrat.getGrade()
			<< " has signed " << this->_Name << " grade: " << this->_GradeSign
			<< endl;

}

std::ostream &operator<<(std::ostream &o, const Form &Form)
{
    o << "Form " << Form.getName() << ". "
      << "status: ( signed: " << std::boolalpha << Form.getisSigned() << ", "
      << "gradeToSign: " << Form.getGradeSign() << ", gradeToExec: " << Form.getGradeExecute()
      << " )";
    return (o);
}