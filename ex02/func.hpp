/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:40:54 by mkulikov          #+#    #+#             */
/*   Updated: 2025/04/15 15:25:36 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNC_HPP
#define FUNC_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate();
void identify(Base* p);
void identify(Base& p);

#endif
