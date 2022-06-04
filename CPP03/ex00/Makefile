# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/03 15:52:34 by ffrau             #+#    #+#              #
#    Updated: 2022/06/03 16:32:03 by ffrau            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= ClapTrap

CC				= clang++
CFLAGS			= -Wall -Wextra -Werror -std=c++98

SRCS			=	main.cpp		\
					ClapTrap.cpp	\

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