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

NAME = myAwesomePhonebook
FLAGS = -Wall -Wextra -Werror
COMP = clang++ $(FLAGS)
FILE = main.cpp Contact.cpp
all : $(NAME)
$(NAME) :
	@$(COMP) $(FILE) -o $(NAME)
clean :
fclean : clean
	@rm -rf $(NAME)
re : fclean all