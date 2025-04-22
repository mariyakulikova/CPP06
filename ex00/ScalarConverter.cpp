/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 13:43:22 by mkulikov          #+#    #+#             */
/*   Updated: 2025/04/22 15:15:19 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <sstream>
#include <limits>
#include <cstdlib>
#include <iomanip>
#include <cctype>
#include <math.h>

static void printChar(double value)
{
	std::cout << "char: ";
	if (value < 0 || value > 127 || isnan(value))
		std::cout << "impossible" << std::endl;
	else if (!isprint(static_cast<char>(value)))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
}

static void printInt(double value)
{
	std::cout << "int: ";
	if (value < static_cast<double>(std::numeric_limits<int>::min()) ||
		value > static_cast<double>(std::numeric_limits<int>::max()) || isnan(value))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(value) << std::endl;
}

static void printFloat(double value)
{
	std::cout << "float: " << std::fixed << std::setprecision(1)
				<< static_cast<float>(value) << "f" << std::endl;
}

static void printDouble(double value)
{
	std::cout << "double: " << std::fixed << std::setprecision(1)
				<< value << std::endl;
}

void ScalarConverter::convert(const std::string &literal)
{
	double value = 0.0;

	if (literal == "nanf" || literal == "nan")
		value = std::numeric_limits<double>::quiet_NaN();
	else if (literal == "+inff" || literal == "+inf")
		value = std::numeric_limits<double>::infinity();
	else if (literal == "-inff" || literal == "-inf")
		value = -std::numeric_limits<double>::infinity();
	else if (literal.length() == 1)
		value = static_cast<double>(literal[0]);
	else
	{
		char *end = NULL;
		value = std::strtod(literal.c_str(), &end);
		if (*end != '\0' && (*end != 'f' || (*end == 'f' && *(end + 1))))
		{
			std::cerr << "Invalid input" << std::endl;
			return;
		}
	}

	printChar(value);
	printInt(value);
	printFloat(value);
	printDouble(value);
}
