# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 21:53:07 by ffrau             #+#    #+#              #
#    Updated: 2022/05/26 20:21:36 by ffrau            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= dreams

CC				= clang++
CFLAGS			= -Wall -Wextra -Werror -std=c++98

SRCS			=	test.cpp	\
					Account.cpp	\

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

.PHONY:			all clean fclean re