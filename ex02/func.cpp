/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:08:37 by mkulikov          #+#    #+#             */
/*   Updated: 2025/04/15 15:25:28 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.hpp"

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
	}
	return NULL;
}

void identify(Base* p)
{
	A* a = dynamic_cast<A*>(p);
	if (a)
	{
		std::cout << "Type: A" << std::endl;
		return ;
	}
	B* b = dynamic_cast<B*>(p);
	if (b)
	{
		std::cout << "Type: B" << std::endl;
		return ;
	}
	C* c = dynamic_cast<C*>(p);
	if (c)
	{
		std::cout << "Type: C" << std::endl;
		return ;
	}
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Type: A" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "Type: B" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "Type: C" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}
}
