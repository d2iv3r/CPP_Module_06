/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:26:43 by efarhat           #+#    #+#             */
/*   Updated: 2023/12/12 17:23:58 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <cstdlib>
#include <ctime>


int main()
{
	std::cout << "----------------Generate----------------\n" << std::endl;
	Base *p = generate();
	if (p)
	{
		std::cout << "\n----------------Identify*----------------\n" << std::endl;
		identify(p);
		std::cout << "\n----------------Identify&----------------\n" << std::endl;
		identify(*p);
		std::cout << std::endl;
		delete p;
	}
	return (0);
}
