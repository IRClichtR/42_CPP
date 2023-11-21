#ifndef DEFINE_H
# define DEFINE_H

// Include Headers ///////////////////////////

# include <iostream>
# include <string>
# include <cctype>

// Return Values /////////////////////////////

# define SUCCESS 0
# define ERROR -42
# define FIRSTNAME_ERR 1
# define LASTNAME_ERR 2
# define NICKNAME_ERR 3
# define PHONENB_ERR 4
# define DARK_ERR 5

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
