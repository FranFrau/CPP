# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/30 15:30:07 by ffrau             #+#    #+#              #
#    Updated: 2022/05/30 15:30:27 by ffrau            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= harlFilter

CC				= clang++
CFLAGS			= -Wall -Wextra -Werror -std=c++98

SRCS			=	main.cpp	\
					Harl.cpp	\

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