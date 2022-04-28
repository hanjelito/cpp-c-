/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 03:07:29 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/28 03:22:00 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	for (this->_MSourceSize = 0; this->_MSourceSize < 4; this->_MSourceSize++)
	{
		this->_MSource[this->_MSourceSize] = 0;
	}	
}

MateriaSource::~MateriaSource()
{
	
}