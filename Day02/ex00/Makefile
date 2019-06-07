NAME = Fixed
CLANG = clang++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp Fixed.class.cpp
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