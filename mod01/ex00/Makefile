# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avolcy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/16 16:27:55 by avolcy            #+#    #+#              #
#    Updated: 2024/07/16 16:28:14 by avolcy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ╔═════════════════╗ #  
#      COLORS         #
# ╚═════════════════╝ #  
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
BLACK = \033[0;39m

# ╔══════════════════╗ #  
#     VARIABLES        #
# ╚══════════════════╝ #  

CPP = c++
RM = rm -rf
NAME = Zombie 
HEADER_ZOMBIE = Zombie.hpp
FLAGS = -Wall -Wextra -Werror -MMD -MF $(@:.o=.d) -std=c++98 -g -fsanitize=address 

# ╔══════════════════════╗ #  
#    COMPILATIION RULES    #
# ╚══════════════════════╝ #  

F_OBJ = build/

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJ = $(addprefix $(F_OBJ), $(SRC:.cpp=.o))
DEP = $(addprefix $(F_OBJ), $(SRC:.cpp=.d))

$(F_OBJ)%.o: %.cpp $(HEADER_ZOMBIE) Makefile
	@$(CC) $(FLAGS) -I ./ -c $< -o $@

all: build_dir $(NAME)

build_dir:
	@mkdir -p $(F_OBJ)

-include $(DEP)

$(NAME): $(OBJ)
	@$(CPP) $(FLAGS) -I ./ $(OBJ) -o $@
	clear
	@echo "\n\n\t$(GREEN)Everything has been compilated.$(BLACK)\n\n"

# ╔══════════════════╗ #  
#    CLEANING RULES    #
# ╚══════════════════╝ #  

clean:
	@$(RM) $(OBJ) $(DEP)
	@$(RM) build
	clear
	@echo "\n\n\t$(YELLOW)OBJ and DEP has been cleaned.$(BLACK)\n"

fclean: clean
	@$(RM) $(NAME)
	@echo "\t$(YELLOW)Everything has been cleaned.$(BLACK)\n\n"

re : fclean all

.PHONY: all clean fclean re build_dir
