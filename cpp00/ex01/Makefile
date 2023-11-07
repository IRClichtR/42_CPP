NAME			= Megaphone

############## Compilation & Flags ###########
CXX				= c++
FLAGS			= -Wall -Wextra -Werror
STD_FLAG	=	-std=c++98

############## SRC Dirs & Files ###########
SRCS_DIR	= srcs/
SRCS_FD		= Megaphone.cpp
SRCS			= $(addprefix $(SRCS_DIR), $(SRCS_FD))


############## OBJS Dirs & Files ###########
OBJ_DIR		= .obj
OBJS			= $(SRCS:$(SRCS_DIR)/%.c=$(OBJ_DIR)/%.o)
#DEPS			= $(OBJS:.o=.d)


############## Recipes ###########
all: $(NAME)

$(NAME): $(OBJS)
	@echo "\033[33m Compiling $(NAME)...\033[0m"
	$(CXX) $(OBJS) -o $(NAME)
	@echo "\033[32m$(NAME) is ready to use\033[0m"

$(OBJ_DIR)/%.o:$(SRCS_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CXX) $(FLAGS) $(STD_FLAG) -c -o $@ $<

#-include $(DEPS)

clean:
	rm -rf $(OBJ_DIR)
	@echo "\033[34m $(OBJ_DIR) deleted\033[0m"

fclean:	clean
	rm -f $(NAME)
	@echo "\033[34m$(NAME) and $(OBJ_DIR) deleted\033[0m"
	
re: fclean all

############## Relink ###########
.PHONY: clean fclean re
