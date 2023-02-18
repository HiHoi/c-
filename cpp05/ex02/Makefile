# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hoslim <hoslim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 13:01:24 by hoslim            #+#    #+#              #
#    Updated: 2023/02/18 19:52:38 by hoslim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat
FLAG = -Wall -Wextra -Werror -std=c++98
C++ = c++
RM = rm -rf
SRCS = \
	./main.cpp\
	./Bureaucrat.cpp\
	./AForm.cpp\
	./ShrubberyCreationForm.cpp\
	./RobotomyRequestForm.cpp\
	./PresidentialPardonForm.cpp
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