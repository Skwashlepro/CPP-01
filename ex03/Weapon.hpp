/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luctan <luctan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 23:35:38 by luctan            #+#    #+#             */
/*   Updated: 2025/08/31 20:59:16 by luctan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iomanip>
# include <iostream>
# include <cstdlib>

class Weapon
{
private:
	std::string	type;
public:
	Weapon(std::string _newtype);
	~Weapon();
	std::string& getType();
	void setType(std::string _newtype);
};

#endif
