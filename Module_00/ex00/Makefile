# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/21 21:59:26 by elvmarti          #+#    #+#              #
#    Updated: 2022/03/21 22:21:43 by elvmarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

RM = rm -rf

$(NAME): $(OBJS)
		@echo $(GREEN) - Compiling - 
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
		@echo $(RED) - Cleaning - $(RED)
		$(RM) $(OBJS) $(LIBFTPATH)*.o

fclean: clean
		$(RM) $(NAME)

re: fclean all

RED			:="\033[0;31m"
GREEN		:="\033[0;32m"
BROWN		:="\033[0;33m"
BLUE		:="\033[0;34m"
PURPLE		:="\033[0;35m"
CYAN		:="\033[0;36m"
YELLOW		:="\033[1;33m"
RESET		:="\x1b[0m"

.PHONY: all clean fclean re