/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luctan <luctan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 14:22:21 by luctan            #+#    #+#             */
/*   Updated: 2025/09/05 14:43:52 by luctan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug() {
    std::cout << "Debug : On m'appelle l'ovni" << std::endl;
}

void Harl::info() {
    std::cout << "Info : j'suis parti jsquatte plus l'béton" << std::endl;
}

void Harl::warning() {
    std::cout << "Warning : j'aide mes potes qui sont béton" << std::endl;
}

void Harl::error() {
    std::cout << "Error : Je sers, que ça retourne son veston" << std::endl;
}

void Harl::complain(std::string level) {
	typedef void (Harl::*HarlFunc)();
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	HarlFunc funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			(this->*funcs[i])();
			return ;
		}
	}
	std::cout << "Unknown : ils s'reconnaissent dans mes sons" << std::endl;
}
