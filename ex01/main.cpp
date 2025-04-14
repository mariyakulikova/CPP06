/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:12:45 by mkulikov          #+#    #+#             */
/*   Updated: 2025/04/14 15:59:04 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"
#include <iostream>

static void printData(Data* data)
{
	std::cout << "Data member len: " << data->len << std::endl;
	std::cout << "Data member string: " << data->str << std::endl;
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./exe <any string>" << std::endl;
		return 0;
	}
	Data data;
	data.str = av[1];
	data.len = static_cast<int>(data.str.length());
	uintptr_t serializedPtr = Serialize::serialize(&data);
	Data *deserializedData = Serialize::deserialize(serializedPtr);
	std::cout << "Original address: " << &data << std::endl;
	std::cout << "Data contetnt:" << std::endl;
	printData(&data);
	std::cout << "Deserialized address: " << deserializedData << std::endl;
	printData(deserializedData);
	return 0;
}
