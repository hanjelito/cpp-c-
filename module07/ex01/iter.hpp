/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 00:03:57 by juan-gon          #+#    #+#             */
/*   Updated: 2022/07/07 20:42:11 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include <iostream>

using std::cout;
using std::endl;

template <typename T, typename F>
void iter(T *arr, size_t len, F f)
{
    for (size_t i = 0; i < len; i++)
        f(arr[i]);
    return;
}

#endif
