/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 22:47:41 by juan-gon          #+#    #+#             */
/*   Updated: 2022/05/23 22:55:58 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <ostream>
#include <stdexcept>
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
		bool			_isSigned;
		int const		_GradeSign;
		int const		_GradeExecute;
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
		virtual void execute(Bureaucrat const &executor) const = 0;
		//
		class GradeTooHighException : public Bureaucrat::GradeTooHighException
		{};
		class GradeTooLowException : public Bureaucrat::GradeTooLowException
		{};
};

std::ostream& operator << ( std::ostream &out, const Form &Form);

#endif
