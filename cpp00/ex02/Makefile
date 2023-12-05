NAME		:=	awsome_account

INC_DIR		:=	./inc

SRCS_DIR	:=	./srcs
SRCS		:=	\
				Account.cpp \
				tests.cpp
SRCS		:=	$(SRCS:%=$(SRCS_DIR)/%)

BUILD_DIR	:=	.build
OBJS		:=	$(SRCS:$(SRCS_DIR)/%.cpp=$(BUILD_DIR)/%.o)
DEPS		:=	$(OBJS:.o=.d)

CC			:=	c++ -o
CFLAGS		:=	-Wall -Wextra -Werror -std=c++98
IFLAGS		:=	$(addprefix -I, $(INC_DIR))

RM			:=	rm -rf
DIR_DUP		=	mkdir -p $(dir $@)

#Recipes______________________________________________________/
all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(BUILD_DIR)/%.o: $(SRCS_DIR)/%.cpp
	@$(DIR_DUP)
	@$(CC) $(CFLAGS) $(IFLAGS) -c -o $@ $<

-include $(DEPS)

clean:
	@$(RM) $(BUILD_DIR) $(DEPS)
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all clean fclean re
