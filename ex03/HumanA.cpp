/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luctan <luctan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 23:42:15 by luctan            #+#    #+#             */
/*   Updated: 2025/08/31 20:58:29 by luctan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string _newname, Weapon& _newweapon) : _name(_newname), _weapon(_newweapon) {
}

HumanA::~HumanA() {}

void	HumanA::attack() {
	std::cout << this->_name << " attacks with their "
		<< this->_weapon.getType() << std::endl;
}
