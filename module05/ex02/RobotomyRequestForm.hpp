/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:51:53 by juan-gon          #+#    #+#             */
/*   Updated: 2022/05/19 19:00:29 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTO_MY_REQUEST_FORM
#define ROBOTO_MY_REQUEST_FORM

#include <iostream>
#include <string>
#include "Form.hpp"
#include "Bureaucrat.hpp"

using std::string;

class RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm(string const target);
		RobotomyRequestForm(RobotomyRequestForm const &o);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &o);
		~RobotomyRequestForm( void );
		//
		void execute(Bureaucrat const &executor) const;
};

#endif