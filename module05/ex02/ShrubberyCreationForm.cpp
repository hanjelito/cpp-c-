/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:10:32 by juan-gon          #+#    #+#             */
/*   Updated: 2022/05/28 12:27:20 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ): Form("Shrubbery Creation", 145, 137), _target("none")
{}

ShrubberyCreationForm::ShrubberyCreationForm( string const target ): Form("Shrubbery Creation", 145, 137), _target(target)
{
	this->setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &o):Form("Shubbery Creation", 145, 137)
{
	*this = o;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &o)
{
	if (this != &o)
		this->setTarget(o.getTarget());
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{}
//

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if(this->getGradeExecute() < executor.getGrade())
    {
        cout << PINK << executor.getName() << "Form is not signedddd" << WHITE << endl;
        throw GradeTooLowException();
    } else {
		string filename(getTarget() + "_shrubbery");
		ofstream data(filename.data());
		if (!data)
		{
			cout << PINK << "Error creation file " << filename << WHITE << endl;
			return;
		}
		data <<
			" ╱╲   ╱╲   ╱╲  \n"
			"╱╯╰╲  ╳╳  ╱╯╰╲ \n"
			"╯╯╰╰╲╱╮╰╲╱╯╯╰╰╲\n"
			"╯╯╰╰╱╰╯╭╮╲╯╯╰╰╰\n"
			"╯╯╰╱╯╭╮╰╯╭╲╯╰╰╰\n"
			"▔▋╱╭╮╰╯╭╮╰╯╲▋▔▔\n"
			" ╱╮╰╯╭╮╰╯╭╮╰╲  \n"
			" ▔▔▔▔▔▔▋▔▔▔▔▔  \n"
		<< endl;
		cout << PINK << "File " << filename << " create in the directory" << WHITE << endl;
		data.close();
	}
}

//
void ShrubberyCreationForm::setTarget(string const &target)
{
	this->_target = target;
}

string ShrubberyCreationForm::getTarget( void ) const
{
	return (this->_target);
}
