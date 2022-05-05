/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 22:47:41 by juan-gon          #+#    #+#             */
/*   Updated: 2022/05/06 01:13:17 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

using std::string;
using std::cout;
using std::endl;

class Form
{
	private:
		string const	_Name;
		int const		_GradeSign;
		int const		_GradeExecute;
		bool			_isSigned;
	public:
		Form( void );
		Form(string name, int gradeSign, int gradeExecute);
		Form(Form const &form);
		Form &operator=(Form const &form);
		~Form( void );
		//
		string	getName( void ) const;
		int		getGradeSign( void ) const;
		int		getGradeExecute( void ) const;
		bool	getisSigned( void ) const;
		void	setisSigned(bool isSigned);
		//
		void beSigned(Bureaucrat const &bureaucrat);
		void checkGrade(int const &grade) const;
		//
		class GradeTooHighException: public Bureaucrat::GradeTooHighException
		{};
		class GradeTooLowException: public Bureaucrat::GradeTooLowException
		{};
};

std::ostream& operator << ( std::ostream &out, const Form &Form);

#endif
