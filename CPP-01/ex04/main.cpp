/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 09:11:54 by lchapren          #+#    #+#             */
/*   Updated: 2021/06/30 10:48:21 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string	toUpper(std::string string)
{
	for (std::string::size_type i = 0; i < string.length(); i++)
		string[i] = std::toupper(string[i]);
	return (string);
}

std::string	replace(std::string buffer, std::string toFind, std::string toReplace)
{
	size_t pos = 0;
	
	while (pos != std::string::npos)
	{
		pos = buffer.find(toFind, pos);
		if (pos != std::string::npos)
		{
			buffer.erase(pos, toFind.length());
			buffer.insert(pos, toReplace);
			pos++;
		}
	}
	return (buffer);
}

int	main(int argc, char *argv[])
{
	// Nb args error management
	if (argc != 4)
	{
		std::cout << "Error: wrong number of arguments: expecting 3" << std::endl;
		return (1);
	}

	// Empty string error management
	std::string		toFind = argv[2];
	std::string		toReplace = argv[3];
	
	if (toFind.length() == 0 || toReplace.length() == 0)
	{
		std::cout << "Error: at least one of the string is empty" << std::endl;
		return (1);
	}

	// Fstream error management
	std::string		inFilename = argv[1];
	std::string		outFilename = toUpper(inFilename) + ".replace";
	std::ifstream 	ifs(inFilename);
	std::ofstream	ofs(outFilename);
	
	if (ifs.fail() || ofs.fail())
	{
		std::cout << "Error: " << strerror(errno) << std::endl;
		if (ifs.is_open())
			ifs.close();
		if (ofs.is_open())
			ofs.close();
		return (1);
	}
	
	// Replacing and writing line by line
	std::string 	buffer;
	
	while (getline(ifs, buffer))
	{
		buffer = replace(buffer, toFind, toReplace);
		ofs << buffer << std::endl;
	}

	ifs.close();
	ofs.close();
	return (0);
}
