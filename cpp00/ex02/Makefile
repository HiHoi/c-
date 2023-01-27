# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/27 19:47:19 by hoslim            #+#    #+#              #
#    Updated: 2023/01/27 21:08:28 by hoslim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account
FLAG = -Wall -Wextra -Werror -std=c++98
C++ = c++
RM = rm -rf
INC = ./Account.hpp
SRCS = \
		./Account.cpp\
		./tests.cpp
OBJS = $(SRCS:.c=.o)

%.o : %.c
	$(C++) $(FLAG) -I $(INC) -c $< -o $@

$(NAME) : $(OBJS)
	$(C++) $(FLAG) -I $(INC) -o $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(RM) ./*.o

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re