# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/04 17:44:40 by elvmarti          #+#    #+#              #
#    Updated: 2022/05/06 15:05:29 by elvmarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

OBJS = $(SRCS:.cpp=.o)

RM = rm -rf

$(NAME): $(OBJS)
		@echo $(GREEN) - Compiling - $(RESET)
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
		@echo $(RED) - Cleaning - $(RED)
		$(RM) $(OBJS)

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