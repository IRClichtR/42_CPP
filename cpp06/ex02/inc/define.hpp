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
# include <stdlib.h>
# include <ctime>
# include <string>
# include "Base.hpp"
# include "B.hpp"
# include "A.hpp"
# include "C.hpp"

//Variables and return values__________________________________________________/

extern bool DEBUG;


//Utils Functions______________________________________________________________/

int randomize();

//ANSI Colors__________________________________________________________________/

# define RED    "\033[0;31m"  
# define GREEN  "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE   "\033[0;34m"
# define PURPLE "\033[0;35m"
# define CYAN   "\033[0;36m"
# define RESET  "\033[0m"



#endif //define.hpp
