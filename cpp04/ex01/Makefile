#Name______________________________________________________________________________/

NAME			= AnimalCreator.bin

#Includes__________________________________________________________________________/

INC_DIR		= ./inc


#Compilation tools_________________________________________________________________/

CXX				= c++ -o
CFLAGS		= -Werror -Wextra -Wall -std=c++98
INC_FLAGS	= $(addprefix -I, $(INC_DIR))


#Sources___________________________________________________________________________/

SRCS_DIR	= ./srcs
SRCS			:= \
						Animal.cpp \
						Dog.cpp \
						Cat.cpp \
						Brain.cpp \
						main.cpp
SRCS			:= $(SRCS:%=$(SRCS_DIR)/%)


#Objects___________________________________________________________________________/

BUILD_DIR	= .build
OBJS			= $(SRCS:$(SRCS_DIR)/%.cpp=$(BUILD_DIR)/%.o)
DEPS			= $(OBJS:.o=.d)


#Other tools_______________________________________________________________________/

RM 				= rm -rf
DIR_DUP		= mkdir -p $(dir $@)

#Colors____________________________________________________________________________/

RED				= \033[0;31m
GREEN			= \033[0;32m
YELLOW		= \033[0;33m
BLUE			= \033[0;34m
PURPLE		= \033[0;35m
CYAN			= \033[0;36m
RESET 		= \033[0m


#Recipes___________________________________________________________________________/

all: $(NAME)

$(NAME): $(OBJS)
	@echo "[" "$(BLUE) ... Compiling $(NAME) ... $(RESET)" "]"
	@echo "[""$(BLUE)		--> Creating objects and dependancies ...$(RESET)" "]"
	@$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "[" "$(GREEN) $(NAME) ok and ready for use$(RESET)" "]"

$(BUILD_DIR)/%.o: $(SRCS_DIR)/%.cpp
	@$(DIR_DUP)
	@$(CXX) $(CFLAGS) $(INC_FLAGS) -c -o $@ $<

-include $(DEPS)
	
clean:
	@echo "[" "$(BLUE) ... Removing Objects ... $(RESET)" "]"
	@$(RM) $(BUILD_DIR) $(DEPS)
	@$(RM) $(OBJS)
	@echo "[" "$(GREEN) Done! $(RESET)" "]"

fclean: clean
	@echo "[" "$(BLUE) ... Removing $(NAME) binary ... $(RESET)" "]"
	@$(RM) $(NAME)
	@echo "[" "$(GREEN) Done! $(RESET)" "]"

re: fclean all


#Relink and display options________________________________________________________/

.PHONY: all clean fclean re
#End_______________________________________________________________________________/
