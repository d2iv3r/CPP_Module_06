/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:04:08 by efarhat           #+#    #+#             */
/*   Updated: 2023/12/12 16:49:59 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <string>

typedef struct s_Data
{
	char	c;
	int		i;
	float	f;
}		Data;

class Serializer
{
	private:
		Serializer();
	public:
		Serializer(const Serializer &cpy);
		Serializer& operator=(const Serializer &cpy);
		~Serializer();
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
