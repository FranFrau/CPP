# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ffrau <ffrau@student.42roma.it>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/14 17:58:29 by ffrau             #+#    #+#              #
#    Updated: 2022/06/23 18:32:02 by ffrau            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

T_BLK = \033[5m
T_NRM = \033[25m
T_CLR = \033[K
C_YLW = \033[33m
C_LRED = \033[91m
C_GRN = \033[32m
C_LYLW = \033[93m
C_LGRN = \033[92m
C_LMGN = \033[95m
C_END = \033[0m

NAME = easyfind

SRC_DIR = ./src/
HEADERS_DIR := ./inc/
OBJS_DIR := ./obj/

SRC = main.cpp
SRCS = ${addprefix $(SRC_DIR), $(SRC)}
FLAGS = -Wall -Wextra -Werror -std=c++98

OBJ 		= 	$(SRCS:.cpp=.o)
OBJS := $(patsubst %.cpp,$(OBJS_DIR)%.o,$(SRC))

HEADERS := $(HEADERS_DIR)*.hpp
DEPS := $(HEADERS)

NB = $(words $(SRCS))
IND = 0
PER = 0

all: $(NAME)

$(NAME): $(OBJS_DIR) $(OBJS)
	@echo "$(C_LYLW)➜ [$(NAME)] Compiling objects ... $(C_END)"
	@clang++ $(FLAGS) -I $(DEPS) $(OBJS) -o $@
	@echo "\033[1A$(T_CLR)$(C_LGRN)➜ [$(NAME)] Objects have been compiled successfully ! $(C_END)"
	@echo "$(C_LGRN)➜ [$(NAME)] $(NAME) has been Compiled Successfully !$(C_END)"

$(OBJS_DIR):
	@mkdir $(OBJS_DIR)

$(OBJS_DIR)%.o : $(SRC_DIR)%.cpp 
	@clang++ $(FLAGS) -I $(DEPS) -c $< -o $@
	@$(eval IND=$(shell echo $$(($(IND) + 1))))
	@$(eval PER=$(shell echo $$((($(IND) * 100) / $(NB)))))
	@printf "$(T_CLR)$(C_LMGN)➜ progress: %3d %% $(C_END)\n\033[1A$(C_END)" $(PER);


clean:
	@rm -rf $(OBJS_DIR)
	@echo "$(C_LYLW)➜ [$(NAME)] Objects have been cleaned Successfully !$(C_END)"


fclean: clean
	@rm -f $(NAME)
	@echo "$(C_LRED)➜ [$(NAME)] $(NAME) has been deleted Successfully !$(C_END)"

re: fclean all
	@echo "$(C_LMGN)➜ [$(NAME)] $(NAME) has been re-builded \
	Successfully !$(C_END)"

leaks:	re
		@echo "$(C_LRED)➜ [$(NAME)] $(NAME) has been checked $(C_END)"
		leaks --atExit -- ./${NAME}

run:	re
		./${NAME}

.PHONY:		all clean fclean re
