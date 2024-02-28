/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*By: ftuernal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:53:58 by ftuernal          #+#    #+#             */
/*   Updated: 2023/12/05 16:54:00 by ftuernal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINE_HPP
# define DEFINE_HPP

//Include Headers______________________________________________________________/

# include <iostream>
# include <string>
# include "ScalarConverter.hpp"

//Variables and return values__________________________________________________/

extern bool DEBUG;


# define CHAR 1
# define INT 2
# define DOUBLE 3
# define FLOAT 4

//Utils Functions______________________________________________________________/


int   defineType(std::string& literal);
bool  notInf(std::string& literal);
bool  notNumberOrFloat(std::string& literal);
int   getPrecision(literal);
void  displayChar(double value, std::string& literal);
void  displayDouble(double value, int precision);
void  displayInt(double value,std::string& literal);
void  displayFloat(double value, int precision);

//ANSI Colors__________________________________________________________________/

# define RED    "\033[0;31m"  
# define GREEN  "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE   "\033[0;34m"
# define PURPLE "\033[0;35m"
# define CYAN   "\033[0;36m"
# define RESET  "\033[0m"



#endif //define.hpp
