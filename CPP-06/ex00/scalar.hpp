/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 14:05:41 by user42            #+#    #+#             */
/*   Updated: 2021/07/19 16:27:33 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <cstdlib>
# include <cmath>
# include <limits>
# include <iomanip>

# define INT_MIN std::numeric_limits<int>::min()
# define INT_MAX std::numeric_limits<int>::max()
# define LONG_MIN std::numeric_limits<long int>::min()
# define LONG_MAX std::numeric_limits<long int>::max()
# define FLOAT_MIN std::numeric_limits<float>::min()
# define FLOAT_MAX std::numeric_limits<float>::max()
# define DOUBLE_MIN std::numeric_limits<double>::min()
# define DOUBLE_MAX std::numeric_limits<double>::max()

bool	isInteger(char* const arg);
bool	isFloat(char* const arg);
bool	isDouble(char* const arg);
bool	isCharacter(char* const arg);
bool	isValid(char* const arg);
bool	isNan(std::string literal);
bool	isInf(std::string literal);

#endif