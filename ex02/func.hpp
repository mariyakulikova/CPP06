/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:40:54 by mkulikov          #+#    #+#             */
/*   Updated: 2025/04/15 12:42:53 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNC_HPP
#define FUNC_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate();
void identify(Base* p);
void identify(Base& p);

#endif
