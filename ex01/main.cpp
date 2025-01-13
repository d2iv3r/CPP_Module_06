/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:58:44 by efarhat           #+#    #+#             */
/*   Updated: 2023/12/12 17:20:30 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"

int main()
{
	Data data;

	data.c = 'm';
	data.i = 1337;
	data.f = 42.5;

	std::cout << "char: " << data.c << std::endl;
	std::cout << "int: " << data.i << std::endl;
	std::cout << "float: " << data.f << std::endl;

	uintptr_t ser = Serializer::serialize(&data);
	std::cout << "--------------Deserialize--------------" << std::endl;
	Data *ptr = Serializer::deserialize(ser);

	std::cout << "char: " << ptr->c << std::endl;
	std::cout << "int: " << ptr->i << std::endl;
	std::cout << "float: " << ptr->f << std::endl;

	return (0);
}
