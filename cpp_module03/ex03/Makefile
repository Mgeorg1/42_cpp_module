NAME = ex03

SRCS = 	main.cpp \
		ClapTrap.cpp \
		FragTrap.cpp \
		ScavTrap.cpp \
		DiamondTrap.cpp \

COMP = clang++ -Wall -Wextra -Werror -Wshadow -Wno-shadow

OBJS = $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
			$(COMP) $(OBJS) -o $(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:	re fclean clean all