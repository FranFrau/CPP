# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/29 11:13:59 by ffrau             #+#    #+#              #
#    Updated: 2022/05/29 11:23:15 by ffrau            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= zombie

CC				= clang++
CFLAGS			= -Wall -Wextra -Werror -std=c++98

SRCS			=	main.cpp		\
					Zombie.cpp		\
					zombieHorde.cpp	\

OBJ				= $(SRCS:.cpp=.o)

%.o:			%.cpp
				$(CC) $(CFLAGS) -g -c $< -o $@

RM				= rm -rf

$(NAME):		$(OBJ)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

all:			$(NAME)

clean:
				$(RM) $(OBJ)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

run:			$(NAME)
				leaks --atExit -- ./$(NAME)
				make fclean -C ./

.PHONY:			all clean fclean re