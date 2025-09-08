/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luctan <luctan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 14:22:26 by luctan            #+#    #+#             */
/*   Updated: 2025/09/05 14:40:36 by luctan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl test;
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR", "BRUH"};

	for (int i = 0; i < 5; i++)
		test.complain(levels[i]);
	return (0);
}
