#NAME____________________________________________________/

NAME			= Awsome_Accounting

#NAME____________________________________________________/

CXX				= c++
FLAGS			= -g3 -Werror -Wextra -Wall
STD_FLAG 	= -std=c++98

#INCLUDE_________________________________________________/
#
# INC_DIR		= include/
# INC_FLAG	= -I $(INC_DIR)
# INC_FD		= Account.hpp
# INC				= $(addprefix $(INC_DIR), $(INC_FD))
#
#SRCS____________________________________________________/

SRCS_DIR	= srcs/
SRCS_FD		= Account.cpp \
						tests.cpp
SRCS			= $(addprefix $(SRCS_DIR), $(SRCS_FD))

#OBJS____________________________________________________/

OBJ_DIR		= .obj
OBJS			= $(SRCS:$(SRCS_DIR)/%.cpp=$(OBJ_DIR)/%.o)




#RECIPES_________________________________________________/

all: $(OBJS)
	@echo "\033[33m Compiling $(NAME)...\033[0m"
	$(CXX) $(OBJS) -o $(NAME)
	@echo "\033[32m$(NAME) is ready to use\033[0m"

$(OBJS_DIR)/%.o:%.cpp
	mkdir -p $(OBJ_DIR)
	$(CXX) $(FLAGS) $(STD_FLAG) -c -o $@ $<

clean:
	rm -rf $(OBJ_DIR)
	@echo "\033[34m $(OBJ_DIR) deleted\033[0m"

fclean:	clean
	rm -f $(NAME)
	@echo "\033[34m$(NAME) and $(OBJ_DIR) deleted\033[0m"
	
re: fclean all

#RELINK PREVENTION_______________________________________/

.PHONY: clean re fclean
# .SILENT:

