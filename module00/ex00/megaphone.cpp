/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 04:03:08 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/02 04:03:09 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::toupper;

void megaphone(char **str)
{
	for(int i = 1; str[i]; i++)
	{
        for(int j = 0; str[i][j]; j++)
		{
			if(str[i][j] >= 'a' && str[i][j] <= 'z')
				cout<<(char)toupper(str[i][j]);
			else
				cout<<str[i][j];
		}
	}
	cout<<endl;
}


int main(int argc, char **argv)
{
    if(argc < 2)
        cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<endl;
	else
    	megaphone(argv);
    return (0);
}