/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 00:40:04 by juan-gon          #+#    #+#             */
/*   Updated: 2022/07/08 02:21:21 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

template <class T>
class Array
{
	private:
		T *_data;
		size_t _size;
	public:
		Array(void );
		Array(size_t size);
		Array(Array const &array);
		Array &operator=(Array const &array);
		T &operator[](size_t size) const;
		~Array( void );
		//
		size_t getSize( void ) const;
		class invalidSize : public std::exception
		{
			virtual const char *what() const throw();
		};
};

template <class T>
Array <T>::Array(void): _data(NULL), _size(0)
{}
//
template <class T>
Array <T>::Array(size_t size): _size(size)
{
	_data = (size > 0)? new T[size](): NULL;
}
//
template <class T>
Array<T>::Array(Array const &array): _data(NULL), _size(0)
{
	*this = array;
}
//
template <class T>
Array<T> &Array<T>::operator=(Array const &array)
{
	if(this != &array)
	{
		this->_size = array.getSize();
		this->_data = new T[array.getSize()]();
		for (size_t i = 0; i < array.getSize(); i++)
			this->_data[i] = array._data[i];
	}
	return (*this);
}
//
template <class T>
T &Array<T>::operator[] (size_t size) const
{
	if (size >= this->getSize() || size < 0)
		throw invalidSize();
	return (this->_data[size]);
}

//
template <class T>
Array<T>::~Array( void )
{
	if(this->_data)
		delete []this->_data;
}

template <class T>
const char *Array<T>::invalidSize::what() const throw()
{
    return "Error: array: ArrayGlobalException\n";
}
//
template <class T>
size_t Array<T>::getSize( void ) const
{
	return (this->_size);
}

#endif
