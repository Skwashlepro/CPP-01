/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luctan <luctan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 21:08:34 by luctan            #+#    #+#             */
/*   Updated: 2025/09/05 14:56:20 by luctan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filename.hpp"

int	printError(int type) {
	if (type == args)
		std::cerr << "Error:\n\twrong arguments" << std::endl;
	if (type == input)
		std::cerr << "Error:\n\tinfile error" << std::endl;
	if (type == output)
		std::cerr << "Error:\n\toutfile error" << std::endl;
	return (1);
}

void	replacer(std::ofstream& infile, std::string target, std::string kword, std::string line) {
	size_t pos = 0;
	size_t prev = 0;

	if (kword.empty() || line.empty())
		;
	else
		while ((pos = line.find(target, prev)) != std::string::npos) {
			infile << line.substr(prev, pos - prev);
			infile << kword;
			prev = pos + target.length();
		}
	infile << line.substr(prev);
	return;
}

int	main(int ac, char **av) {
	std::string buf;
	std::string target;
	std::string kword;

	if (ac != 4)
		return printError(args);
	target = av[S1];
	kword = av[S2];

	std::ifstream infile;
	std::string infilename;
	infilename = av[FILENAME];
	infile.open(infilename.c_str());
	if (!infile.good() || infile.eof())
		return printError(input);

	std::string outfilename;
	std::ofstream outfile;
	outfilename = infilename + ".replace";
	outfile.open(outfilename.c_str());
	if (!outfile.good()){
		infile.close();
		return printError(output);
	}
	while (getline(infile, buf))
		replacer(outfile, target, kword, buf + "\n");

	infile.close();
	outfile.close();
	return 0;
}
