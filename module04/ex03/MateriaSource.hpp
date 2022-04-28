/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 02:28:34 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/28 03:22:36 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{

	private:
		int _MSourceSize;
		AMateria *_MSource[4];
	public:
		MateriaSource( void );
		MateriaSource(const MateriaSource &other);
		MateriaSource &operator=(const MateriaSource &source);
		~MateriaSource();
		//
		void learnMateria(AMateria *materia);
		AMateria* createMateria(std::string const & type);
};

#endif