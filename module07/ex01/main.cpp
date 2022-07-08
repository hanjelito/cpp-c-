/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 00:04:01 by juan-gon          #+#    #+#             */
/*   Updated: 2022/07/07 20:44:51 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void print_var(T const &x)
{
    cout << x << " ";
}

template <typename T>
void multTen(T &x)
{
    x *= 10;
}

template <typename T>
void inc(T &x)
{
    x++;
}

int main(void)
{
	{
        cout << "<--- Double array --->\n";
        double arr[10] = {-5.123f, -4.3412f, -3.23f, -2.134f, -1.3413f, 0, 1.24f, 2.1234f, 3.1234f, 4.1234f};
        ::iter(arr, 10, print_var<double>);
        cout << "\n";
        ::iter(arr, 10, multTen<double>);
        ::iter(arr, 10, print_var<double>);
        cout << "\n";
    }
    {
        cout << "\n<--- Float array --->\n";
        float arr[10] = {-5.123f, -4.3412f, -3.23f, -2.134f, -1.3413f, 0, 1.24f, 2.1234f, 3.1234f, 4.1234f};
        ::iter(arr, 10, print_var<float>);
        cout << "\n";
        ::iter(arr, 10, multTen<float>);
        ::iter(arr, 10, print_var<float>);
        cout << "\n";
    }
    {
        cout << "\n<--- Char array --->\n";
        char arr[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
        ::iter(arr, 10, print_var<char>);
        cout << "\n";
        ::iter(arr, 10, inc<char>);
        ::iter(arr, 10, print_var<char>);
        cout << "\n";
    }
    {
        cout << "\n<--- Bool array --->\n";
        char arr[10] = {true, false, true, false, true, false, true, false, true, false};
        ::iter(arr, 10, print_var<bool>);
        cout << "\n";
    }
	return (0);
}
