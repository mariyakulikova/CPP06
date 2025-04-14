/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Serialize.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:15:06 by mkulikov          #+#    #+#             */
/*   Updated: 2025/04/14 15:49:25 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Data.hpp"
#include <stdint.h>

class  Serialize
{
private:
	Serialize();
	Serialize(const Serialize& other);
	Serialize& operator=(const Serialize& other);
	~Serialize();
public:
	static uintptr_t serialize(Data *ptr);
	static Data* deserialize(uintptr_t raw);
};

