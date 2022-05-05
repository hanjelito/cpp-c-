/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 02:27:59 by juan-gon          #+#    #+#             */
/*   Updated: 2022/05/05 23:44:07 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREACRAT_HPP
#define BUREACRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

using std::string;
using std::cout;
using std::endl;
using std::exception;
using std::ostream;

#define MAX_GRADE 1
#define MIN_GRADE 150

class Bureaucrat
{
	private:
		string const	_Name;
		int				_Grade;
	public:
		Bureaucrat( void );
		Bureaucrat(string Name, int Grade);
		Bureaucrat(Bureaucrat const &other);
		Bureaucrat &operator=(Bureaucrat const &other);
		~Bureaucrat();
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
		//
		void upGrade( void );
		void downGrade( void );
		void checkGrade(int const &grade) const;
		//
		void signForm(Form &form);
		//
		string const &getName( void ) const;
		int getGrade( void ) const;
		void setGrade( int const &grade );

};

ostream &operator<<(ostream &o, Bureaucrat &rhs);

#endif