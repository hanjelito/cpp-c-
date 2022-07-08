/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 12:05:55 by juan-gon          #+#    #+#             */
/*   Updated: 2022/06/29 23:58:35 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
 #define WHATEVER_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

template <typename T>
void swap(T &a, T &b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T const max(T a, T b)
{
	return ( (a >= b) ? a : b);
}

template <typename T>
T const min(T a, T b)
{
	return ((a <= b) ? a : b);
}

#endif
