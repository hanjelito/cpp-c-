/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 12:47:49 by juan-gon          #+#    #+#             */
/*   Updated: 2022/05/23 23:37:23 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ): Form("Robotomy Request", 72, 45), _target("none")
{}

RobotomyRequestForm::RobotomyRequestForm(string const target): Form("Robotomy Request", 72, 45)
{
	this->setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &o):Form("Robotomy Request", 72, 45)
{
	*this = o;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &o)
{
	if(this != &o)
	{
		this->setTarget(o.getTarget());
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{}
//
void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	int success = 0;
	if(!(getisSigned()))
	{
		cout << "Form is not signed" << endl;
		throw GradeTooLowException();
	} else {
		srand(time(0));
		success = ( rand() % 100 );
		if(success > 50)
			cout << "Rizzzzzzzz, target " << getTarget() << " has been robotomized successfully 50% of the time" << endl;
		else
			cout << "It's a failure !" << endl;
	}
}
//
void RobotomyRequestForm::setTarget(string const &target)
{
	this->_target = target;
}
string RobotomyRequestForm::getTarget( void ) const
{
	return (this->_target);
}
