/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luctan <luctan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 23:52:28 by luctan            #+#    #+#             */
/*   Updated: 2025/08/31 20:32:14 by luctan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string newtype){
	this->setType(newtype);
}

Weapon::~Weapon(){}

void	Weapon::setType(std::string newtype) {
	this->type = newtype;
}

std::string&	Weapon::getType(){
	return (this->type);
}
