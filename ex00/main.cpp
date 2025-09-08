/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luctan <luctan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 02:54:36 by luctan            #+#    #+#             */
/*   Updated: 2025/08/19 02:59:19 by luctan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *newZ;

	newZ = newZombie("zebi");
	newZ->announce();
	randomChump("random");
	delete newZ;
	return (0);
}
