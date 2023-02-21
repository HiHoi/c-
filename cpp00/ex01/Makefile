# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/27 16:19:35 by hoslim            #+#    #+#              #
#    Updated: 2023/02/21 12:53:27 by hoslim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MyAwesomePhoneBook
FLAG = -Wall -Wextra -Werror -std=c++98
C++ = c++
RM = rm -rf
SRCS = \
		./PhoneBook.cpp\
		./Contact.cpp\
		./main.cpp
OBJS = $(SRCS:.c=.o)

%.o : %.c
	$(C++) $(FLAG) -c $< -o $@

$(NAME) : $(OBJS)
	$(C++) $(FLAG) -o $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(RM) ./*.o

fclean : clean
	$(RM) ./MyAwesomePhoneBook

re : fclean all

.PHONY : all clean fclean re