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

#ifndef DEFINE_H
# define DEFINE_H

//Include Headers______________________________________________________________/

# include <iostream>
# include <string>
# include <stdlib.h>
# include <sstream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"

//Variables and return values__________________________________________________/

extern bool DEBUG;


# define SUCCESS 0
# define ERROR -42

//Utils Functions______________________________________________________________/

bool          checkArgs(int ac, char **av);
unsigned int  getIntArg(std::string action);
std::string   getStrArg(std::string action);
std::string   getUsrInput(void);


//ANSI Colors__________________________________________________________________/

# define RED    "\033[0;31m"  
# define GREEN  "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE   "\033[0;34m"
# define PURPLE "\033[0;35m"
# define CYAN   "\033[0;36m"
# define RESET  "\033[0m"



#endif //define.hpp
