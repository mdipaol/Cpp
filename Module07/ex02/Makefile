# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/06 14:39:03 by mdi-paol          #+#    #+#              #
#    Updated: 2023/10/04 18:28:27 by mdi-paol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Template
SRCS = main.cpp
FLAGS = -Wall -Werror -Wextra -std=c++98 -g
OBJS = $(SRCS:.cpp=.o)
CC = c++

all : $(NAME)

$(NAME): $(OBJS)
	@ $(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)✅ Compiled ✅$(WHITE)"

%.o: %.cpp
	@ $(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "$(BLUE)☑️ Clean OBJS ☑️$(WHITE)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(BLUE)☑️ Clean OBJS & EXEC ☑️$(WHITE)"

re: fclean all

.PHONY: all clean fclean re

#      -----COLORS------

GREEN = \033[1;32m
BLUE = \033[1;34m
WHITE = \033[0m
