/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:34:30 by mkulikov          #+#    #+#             */
/*   Updated: 2025/04/15 15:24:47 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "func.hpp"

int main()
{
	Base* base = generate();
	Base& baseRef = *base;
	std::cout << "identify(Base* p): ";
	identify(base);
	std::cout << "identify(Base& p): ";
	identify(baseRef);
	delete base;
	return 0;
}
