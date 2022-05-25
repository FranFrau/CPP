# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ffrau <ffrau@student.42roma.it>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 21:53:07 by ffrau             #+#    #+#              #
#    Updated: 2022/05/25 21:53:08 by ffrau            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= megaphone

SRCS			= megaphone.cpp
OBJ				= $(SRCS:.cpp=.o)

CC				= clang++
RM				= rm -rf
CFLAGS			= -Wall -Wextra -Werror

%.o:			%.cpp
				$(CC) $(CFLAGS) -c $< -o $@

all:			$(NAME)

$(NAME):		$(OBJ)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
				$(RM) $(OBJ)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re