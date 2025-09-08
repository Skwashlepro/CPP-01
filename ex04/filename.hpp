/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filename.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luctan <luctan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 21:09:37 by luctan            #+#    #+#             */
/*   Updated: 2025/08/31 21:24:12 by luctan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILENAME_HPP
# define FILENAME_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

enum	Args{
	FILENAME = 1,
	S1,
	S2,
};

enum	Errors{
	args = 1,
	input,
	output,
};

#endif
