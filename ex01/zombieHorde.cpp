/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luctan <luctan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 03:00:40 by luctan            #+#    #+#             */
/*   Updated: 2025/08/21 23:19:59 by luctan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name){
	Zombie *zombieHorde;
	zombieHorde = new Zombie[N];

	for (int i = 0; i < N ; i++) {
		zombieHorde[i] = Zombie(name);
	}
	return (zombieHorde);
}
