/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:42:39 by juan-gon          #+#    #+#             */
/*   Updated: 2022/04/09 16:42:40 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int checkParameter(int argumentCount)
{
    if (argumentCount != 4) {
        std::cout << "./replace <Filename> <tex1> <replace text>" << std::endl;
        return (1);
    }
    return (0);
}

std::string outputFile(std::ifstream &readFile)
{
	std::string tmp;
	std::string output;

	tmp = "";
	output = "";
	while (!readFile.eof())
    {
        getline(readFile, tmp);
        output += tmp;
        if (!readFile.eof())
            output += '\n';
    }
	return (output);
}

int existingFile(std::ifstream &readFile, std::string nameFile)
{
	
    readFile.open(nameFile, std::ios::in);
    if (!readFile)
    {
        std::cout << "nonexistent File " << nameFile << std::endl;
        return (1);
    }
	return (0);
}

int createFile(std::ofstream &fout, std::string &nameFile, std::string &outfile)
{
	outfile = nameFile + ".replace";
	fout.open(outfile, std::ios::out | std::ios::trunc);
	if (!fout)
    {
        std::cout << "unable to write verify permissions " << outfile << std::endl;
        return (1);
    }
	return (0);
}

std::string replaceWord(std::string str, std::string s1, std::string s2)
{
	size_t pos;

	pos = str.find(s1);
    while (pos != std::string::npos)
    {
        str.erase(pos, s1.length());
        str.insert(pos, s2);
        pos = str.find(s1, pos + s2.length());
    }
	return (str);
}

int main(int argc, char **argv)
{
	std::string nameFile;
	std::string s1;
	std::string s2;
	std::string outfile;
    std::string input;
	std::ifstream readFile;
    std::ofstream fout;

	if(checkParameter(argc))
		return (1);
	nameFile = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if(existingFile(readFile, nameFile))
		return (1);
	if(createFile(fout, nameFile, outfile))
		return (1);
	input = outputFile(readFile);
    readFile.close();
    fout << replaceWord(input, s1, s2);
    fout.close();

    return 0;
}