# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/08 15:39:37 by avolcy            #+#    #+#              #
#    Updated: 2025/01/03 23:50:16 by marvin           ###   ########.fr        #
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
NAME = AForm

SRCS = ./src/
HEADERS = ./header/

HEADER_HPP = $(HEADERS)Bureaucrat.hpp $(HEADERS)AForm.hpp

FLAGS = -Wall -Wextra -Werror -MMD -MF $(@:.o=.d) -std=c++98 -g -fsanitize=address 

# ╔══════════════════════╗ #  
#    COMPILATION RULES     #
# ╚══════════════════════╝ #  

F_OBJ = build/

SRC = main.cpp Bureaucrat.cpp AForm.cpp
OBJ = $(addprefix $(F_OBJ), $(SRC:.cpp=.o))
DEP = $(addprefix $(F_OBJ), $(SRC:.cpp=.d))

$(F_OBJ)%.o: $(SRCS)%.cpp $(HEADER_HPP) Makefile
	@$(CC) $(FLAGS) -I ./ -c $< -o $@

all: build_dir $(NAME)

build_dir:
	@mkdir -p $(F_OBJ)

-include $(DEP)

$(NAME): $(OBJ)
	@$(CPP) $(FLAGS) -I ./ $(OBJ) -o $@
	clear
	@echo "\n\n\t$(GREEN)Everything has been compilated.$(BLACK)\n"

# ╔══════════════════╗ #  
#    CLEANING RULES    #
# ╚══════════════════╝ #  

clean:
	@$(RM) $(OBJ) $(DEP)
	@$(RM) build
	@echo "\n\n\t$(YELLOW)OBJ and DEP has been cleaned.$(BLACK)\n"
	clear

fclean: clean
	@$(RM) $(NAME)
	@echo "\t$(YELLOW)Everything has been cleaned.$(BLACK)\n"

re : fclean all

.PHONY: all clean fclean re build_dir
