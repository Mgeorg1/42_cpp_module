NAME = a.out

SRCS = 	main.cpp \
		Fixed.cpp \

COMP = clang++ -Wall -Wextra -Werror

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