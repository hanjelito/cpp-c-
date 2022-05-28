/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:32:22 by juan-gon          #+#    #+#             */
/*   Updated: 2022/05/28 12:27:16 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRY_CREATION_FORM
#define SHRUBERRY_CREATION_FORM

#include <iostream>
#include <string>
# include <fstream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

using std::string;
using std::cout;
using std::endl;
using std::ofstream;

class ShrubberyCreationForm: public Form
{
	private:
		string _target;
	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm(string const target);
		ShrubberyCreationForm(ShrubberyCreationForm const &o);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &o);
		~ShrubberyCreationForm( void );
		//
		void execute(Bureaucrat const  &executor) const;
		//
		void setTarget(string const &target);
		string getTarget( void ) const;
};

#endif
