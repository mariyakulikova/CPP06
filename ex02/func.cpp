/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:08:37 by mkulikov          #+#    #+#             */
/*   Updated: 2025/04/14 17:13:34 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate()
{
	std::srand(std::time(0));
	int random_int = std::rand() % 3;
	switch (random_int)
	{
	case 0:
		return new A;
	case 1:
		return new B;
	case 2:
		return new C;
	default:
		break;
	}
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "Type: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Type: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Type: C" << std::endl;
	else
		std::cout << "Type: Unknown type" << std::endl;
}
