/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 00:27:55 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/27 01:32:35 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

# define WHITE	"\033[0;37m"
# define YELLOW	"\033[1;33m"
# define GREEN	"\033[1;32m"
# define BLUE	"\033[1;34m"
# define RED	"\033[1;31m"
# define PINK	"\033[1;35m"
# define GRAY	"\033[1;30m"
# define CYAN	"\033[1;36m"

#define N_IDEAS 100

using std::string;
using std::cout;
using std::endl;
using std::ifstream;

class Brain
{
	private:
		string _Ideas[N_IDEAS];
	public:
		Brain( void );
		Brain( Brain const &other);
		Brain &operator=(Brain const &other);
		virtual ~Brain();
		void setIdeas( void );
		string const getIdeas( void ) const;
};

#endif
