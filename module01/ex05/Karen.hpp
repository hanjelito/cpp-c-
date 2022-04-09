/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:42:33 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/09 17:05:58 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAEREN_HPP

#include <iostream>
#include <string>

class Karen
{
    private:
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