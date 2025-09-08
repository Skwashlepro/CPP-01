/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luctan <luctan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 23:42:22 by luctan            #+#    #+#             */
/*   Updated: 2025/08/31 21:04:40 by luctan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string _newname) : _name(_newname) {
}

HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon& _newweapon) {
	this->_weapon = &_newweapon;
}

void	HumanB::attack() {
	if (this->_weapon)
		std::cout << this->_name << " attacks with their "
			<< this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << "is not armed" << std::endl;
}
