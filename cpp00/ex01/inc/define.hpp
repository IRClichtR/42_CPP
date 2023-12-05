/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuernal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:53:58 by ftuernal          #+#    #+#             */
/*   Updated: 2023/12/05 16:54:00 by ftuernal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINE_H
# define DEFINE_H

// Include Headers ///////////////////////////

# include <iostream>
# include <string>
# include <cctype>
# include <cstdlib>
# include <iomanip>

// Return Values /////////////////////////////

# define SUCCESS 0
# define ERROR -42

//////////////////////////////////////////
// Define values/////////////////////////////

# define PB_SIZE 8

# define EMPTY_CONTACT "--- Empty Contact slot ---"
# define W_OVER_CONTACT "--- Writting over existing contact ---"

//////////////////////////////////////////
// ANSI COLORS ///////////////////////////

# define YELLOW  
# define GREEN
# define RED
# define BLUE "\033[1;44m"
# define ORANGE
//////////////////////////////////////////

//////////////////////////////////////////
// FUNCTIONS ////////////////////////////

void  displayInstructions(void);


#endif //
