/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:22:05 by efarhat           #+#    #+#             */
/*   Updated: 2023/12/12 17:26:22 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cstdlib>

class Base
{
	public:
		virtual ~Base();
};

#define CLASS_A 1
#define CLASS_B 2
#define CLASS_C 3

Base * generate(void);
void identify(Base* p);
void identify(Base& P);

#endif
