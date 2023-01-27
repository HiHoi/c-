# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/27 16:19:35 by hoslim            #+#    #+#              #
#    Updated: 2023/01/27 19:48:17 by hoslim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MyAwesomePhoneBook
FLAG = -Wall -Wextra -Werror -std=c++98
C++ = c++
RM = rm -rf
INC = ./PhoneBook.hpp
SRCS = \
		./PhoneBook.cpp
OBJS = $(SRCS:.c=.o)

%.o : %.c
	$(C++) $(FLAG) -I $(INC) -c $< -o $@

$(NAME) : $(OBJS)
	$(C++) $(FLAG) -I $(INC) -o $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(RM) ./*.o

fclean : clean
	$(RM) ./MyAwesomePhoneBook

re : fclean all

.PHONY : all clean fclean re