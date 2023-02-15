# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/13 20:25:05 by hoslim            #+#    #+#              #
#    Updated: 2023/02/13 20:25:05 by hoslim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal
FLAG = -Wall -Wextra -Werror -std=c++98
C++ = c++
RM = rm -rf
SRCS = \
	./main.cpp\
	./Animal.cpp\
	./Dog.cpp\
	./Cat.cpp
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