/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 02:27:59 by juan-gon          #+#    #+#             */
/*   Updated: 2022/05/04 16:51:57 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREACRAT_HPP
#define BUREACRAT_HPP

#include <iostream>
#include <string>
#include <exception>

using std::string;
using std::cout;
using std::endl;
using std::exception;
using std::ostream;

#define MIN_GRADE 1
#define MAX_GRADE 150

class Bureaucrat
{
	private:
		int				_Grade;
		string const	_Name;
	public:
		Bureaucrat( void );
		Bureaucrat(string &Name, int Grade);
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
		string const &getName( void ) const;
		int getGrade( void ) const;

};

ostream &operator<<(ostream &o, Bureaucrat &rhs);

#endif