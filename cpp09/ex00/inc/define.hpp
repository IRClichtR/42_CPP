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
# include <map>
# include <algorithm>
# include <sstream>
# include <string>
# include <fstream>
# include <cstdlib>
# include "Exceptions.hpp"
# include "BitcoinExchange.hpp"

// extern bool DEBUG;



//Utils Functions______________________________________________________________/
//
void                                checkDate(const std::string &date);
void                                checkDataMap(std::map<std::string, std::string> map, int low, int high);
bool                                checkDateDigits(const std::string &date);
bool                                checkMonths(const std::string &date);
bool                                isBisextile(int year);
bool                                is31Month(int year);

void                                checkVal(const std::string value, int low, int high);
std::map<std::string, std::string>  putDataIntoMap(const char *filename, char sep);
  

//ANSI Colors__________________________________________________________________/

# define RED    "\033[0;31m"  
# define GREEN  "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE   "\033[0;34m"
# define PURPLE "\033[0;35m"
# define CYAN   "\033[0;36m"
# define RESET  "\033[0m"



#endif //define.hpp
