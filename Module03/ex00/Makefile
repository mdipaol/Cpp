# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/06 14:39:03 by mdi-paol          #+#    #+#              #
#    Updated: 2023/07/26 18:39:34 by mdi-paol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Clap_Trap
SRCS = main.cpp ClapTrap.cpp
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
OBJS = $(SRCS:.cpp=.o)

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

rm:
	@find . -type f ! -name "main.cpp" ! -name "Makefile" ! -name "main.o" ! -name "Replace_Line" -exec rm -rf {} +

.PHONY: all clean fclean re

#      -----COLORS------

GREEN = \033[1;32m
BLUE = \033[1;34m
WHITE = \033[0m
