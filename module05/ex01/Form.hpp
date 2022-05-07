/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 22:47:41 by juan-gon          #+#    #+#             */
/*   Updated: 2022/05/07 15:00:44 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include <string>
#include "Bureaucrat.hpp"

# define WHITE	"\033[0;37m"
# define YELLOW	"\033[1;33m"
# define GREEN	"\033[1;32m"
# define BLUE	"\033[1;34m"
# define RED	"\033[1;31m"
# define PINK	"\033[1;35m"
# define GRAY	"\033[1;30m"
# define CYAN	"\033[1;36m"

using std::string;
using std::cout;
using std::endl;
using std::exception;

class Bureaucrat;

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
		virtual ~Form( void );
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
		class GradeTooHighException: public exception
		{
			public:
				virtual const char *what() const throw ();
		};
		class GradeTooLowException : public exception
		{
			public:
				virtual const char *what() const throw ();
		};
};

std::ostream& operator << ( std::ostream &out, const Form &Form);

#endif
