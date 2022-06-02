# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 10:28:15 by ffrau             #+#    #+#              #
#    Updated: 2022/06/02 13:11:38 by ffrau            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= fixed

CC				= clang++
CFLAGS			= -Wall -Wextra -Werror -std=c++98

SRCS			=	main.cpp	\
					Fixed.cpp	\
					Point.cpp	\
					bsp.cpp		\

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
				./$(NAME)
				make fclean -C ./

leaks:			$(NAME)
				leaks --atExit -- ./$(NAME)
				make fclean -C ./

.PHONY:			all clean fclean re