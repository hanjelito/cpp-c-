/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:42:33 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/09 20:11:13 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

class Karen
{
    private:
        struct FuncList {
            std::string index;
            void (Karen::*f)(void);
        };
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        Karen();
        ~Karen();
        void complain( std::string level );
};

#endif