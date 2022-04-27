/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 00:28:06 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/27 01:51:30 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	cout << GREEN << "Brain as construted" << WHITE << endl;
}

Brain::Brain(Brain const &other)
{
	this->operator=(other);
	cout << GREEN << " Copy constructor called" << WHITE << endl;
}

Brain &Brain::operator=(Brain const &other)
{
	for (int i = 0; i < N_IDEAS; i++)
        this->_Ideas[i] = other._Ideas[i];
	return (*this);
}

Brain::~Brain()
{
	cout << GREEN << "Brain " << " is destroyed" << WHITE << endl;
}
//
void Brain::setIdeas()
{
	ifstream readFile("question.txt");
	string tmp;
	int i = 0;
	while(getline(readFile, tmp))
	{
		this->_Ideas[i] = tmp;
		i++;
	}
	readFile.close();
}
string const Brain::getIdeas() const
{
	int random = rand()%100;
	return (this->_Ideas[random]);
}