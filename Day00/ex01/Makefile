# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnyakuti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/04 15:28:15 by rnyakuti          #+#    #+#              #
#    Updated: 2019/06/04 15:30:05 by rnyakuti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CLANG = clang++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp Contact.cpp
OBJS = $(SRCS:%.cpp=%.o)
INC = -I ./
RM = rm -rf
all: $(OBJS)
	@echo "\033[0;32mCompiling $(NAME)...\033[0m"
	@$(CLANG) -o $(NAME) $(OBJS) $(INC) $(FLAGS)
$(OBJS): $(SRCS)
	@echo "\033[0;32mCreating object files...\033[0m"
	@$(CLANG) -c $(SRCS) $(INC) $(FLAGS)
clean:
	@echo "\033[0;31mRemoving object files...\033[0m"
	@$(RM) $(OBJS)
fclean: clean
	@echo "\033[0;31mRemoving $(NAME)..."
	@$(RM) $(NAME)
re: fclean all