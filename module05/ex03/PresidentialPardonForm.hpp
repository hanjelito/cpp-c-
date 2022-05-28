/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:11:59 by juan-gon          #+#    #+#             */
/*   Updated: 2022/05/21 01:13:20 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM
#define PRESIDENTIAL_PARDON_FORM

#include <iostream>
#include <string>
#include "Form.hpp"
#include "Bureaucrat.hpp"

using std::string;
using std::cout;
using std::endl;

class PresidentialPardonForm: public Form
{
	private:
		string _target;
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm(string  const target);
		PresidentialPardonForm(PresidentialPardonForm const &o);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &o);
		~PresidentialPardonForm( void );
		//
		void execute(Bureaucrat const &executor) const;
		//
		void setTarget(string const &target);
		string getTarget(void) const;
};

#endif
