/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 22:33:56 by juan-gon          #+#    #+#             */
/*   Updated: 2022/05/28 12:29:31 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ):Form("Presidential Pardon", 25, 5), _target("none")
{}

PresidentialPardonForm::PresidentialPardonForm(string const target): Form("Presidential Pardon", 25, 5)
{
	this->setTarget(target);	
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &o): Form("Presidential Pardon", 25, 5)
{
	 *this = o;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &o)
{
	if (this != &o)
	{
		this->setTarget(o.getTarget());
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{}
//
void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if(this->getGradeExecute() < executor.getGrade())
	{
		cout << YELLOW << "Form is not signed" << WHITE << endl;
		throw GradeTooLowException();
	} else {
		cout << YELLOW  << executor.getName() << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << WHITE << endl;
	}
}
//
void PresidentialPardonForm::setTarget(std::string const &target)
{
	this->_target = target;
}

string PresidentialPardonForm::getTarget( void ) const
{
	return (this->_target);
}
