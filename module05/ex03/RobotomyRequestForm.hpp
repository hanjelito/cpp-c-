/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:51:53 by juan-gon          #+#    #+#             */
/*   Updated: 2022/05/25 17:42:22 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTO_MY_REQUEST_FORM
#define ROBOTO_MY_REQUEST_FORM

#include <iostream>
#include <string>
#include <time.h>
#include "Form.hpp"
#include "Bureaucrat.hpp"

using std::string;
using std::cout;
using std::endl;

class RobotomyRequestForm: public Form
{
	private:
		string _target;
	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm(string const target);
		RobotomyRequestForm(RobotomyRequestForm const &o);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &o);
		~RobotomyRequestForm( void );
		//
		void execute(Bureaucrat const &executor) const;
		//
		void setTarget(string const &target);
		string getTarget(void) const;
};

#endif
