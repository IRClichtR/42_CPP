#Ingredients_______________________________________________________________________/

NAME        := MoreBrain

SRCS        := main.c
OBJS        := main.o

CC          := c++
CFLAGS      := -Wall -Wextra -Werror -std=c++98


RM          := rm -f
MAKEFLAGS   += --no-print-directory


#Recipes___________________________________________________________________________/

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all


.PHONY: clean fclean re


