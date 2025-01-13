/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:05:03 by efarhat           #+#    #+#             */
/*   Updated: 2023/12/12 17:18:56 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {};

ScalarConverter::ScalarConverter(const ScalarConverter &cpy)
{
	*this = cpy;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &cpy)
{
	if (this != &cpy)
	{
	}
	return (*this);
}

ScalarConverter::~ScalarConverter() {};

bool is_nan(double d) { return(d != d); }

void convert_char(double d)
{
	std::cout << "char: ";
	if (d > 255 || d < 0 || is_nan(d))
		std::cout << "Impossible" << std::endl;
	else if (!std::isprint(d))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
}

void convert_int(double d)
{
	std::cout << "int: ";
	if (is_nan(d) || d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
		std::cout << "Impossible" << std::endl;
	else
		std::cout << static_cast<int>(d) << std::endl;
}

void ScalarConverter::convert(std::string const str)
{
	double	d;
	char	*p;

	if (str.size() == 1 && !isdigit(str[0]))
	{
		std::cout << "char: " << str[0] <<
			"\nint: " << static_cast<int>(str[0]) <<
			"\nfloat: " << std::fixed << std::setprecision(1) << static_cast<float>(str[0]) <<
			"f\ndouble: " << static_cast<double>(str[0]) << std::endl;
		return ;
	}
	d = strtod(str.c_str(), &p);
	if (p == str || (p[0] && (p[0] != 'f' || p[1])))
	{
		std::cout << "char: Impossible\nint: Impossible\nfloat: Impossible\ndouble: Impossible\n";
		return ;
	}
	convert_char(d);
	convert_int(d);
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}
