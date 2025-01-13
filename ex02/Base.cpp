/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:59:39 by efarhat           #+#    #+#             */
/*   Updated: 2023/12/12 17:26:26 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
}

Base * generate(void)
{
	srand(time(0));
	int r = (rand() % 3) + 1;
	switch (r)
	{
		case CLASS_A:
			std::cout << "Generate class 'A'" << std::endl;
			return (new A);
		case CLASS_B:
			std::cout << "Generate class 'B'" << std::endl;
			return (new B);
		case CLASS_C:
			std::cout << "Generate class 'C'" << std::endl;
			return (new C);
	}
	return (NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Identified as class 'A'" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Identified as class 'B'" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Identified as class 'C'" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "Identify as class 'A'" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "Identify as class 'B'" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "Identify as class 'C'" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}
}
