/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:32:22 by juan-gon          #+#    #+#             */
/*   Updated: 2022/05/19 20:42:38 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRY_CREATION_FORM
#define SHRUBERRY_CREATION_FORM

#include <iostream>
#include <string>
#include "Form.hpp"
#include "Bureaucrat.hpp"

using std::string;

class ShrubberyCreationForm
{
	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm(string const target);
		ShrubberyCreationForm(ShrubberyCreationForm const &o);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &o);
		~ShrubberyCreationForm( void );
		//
		void execute(Bureaucrat const  &executor) const;
};

#endif
