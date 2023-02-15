NAME = TheWorldOnFire
FLAG = -Wall -Wextra -Werror -std=c++98
C++ = c++
RM = rm -rf
SRCS = \
	./main.cpp\
	./Animal.cpp\
	./Dog.cpp\
	./Cat.cpp\
	./Brain.cpp
OBJS = $(SRCS:.c=.o)

%.o : %.c
	$(C++) $(FLAG) -c $< -o $@

$(NAME) : $(OBJS)
	$(C++) $(FLAG) -o $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(RM) ./*.o

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re