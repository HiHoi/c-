# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 20:16:20 by hoslim            #+#    #+#              #
#    Updated: 2023/01/27 16:07:45 by hoslim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
FLAG = -Wall -Wextra -Werror -std=c++98
C++ = c++
RM = rm -rf
SRCS = \
		./megaphone.cpp
OBJS = $(SRCS:.c=.o)

%.o : %.c
	$(C++) $(FLAG) -c $< -o $@

$(NAME) : $(OBJS)
	$(C++) $(FLAG) -o $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(RM) ./*.o

fclean : clean
	$(RM) ./megaphone

re : fclean all

.PHONY : all clean fclean re