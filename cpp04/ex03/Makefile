# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tamighi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/17 16:02:47 by tamighi           #+#    #+#              #
#    Updated: 2022/03/22 14:32:41 by tamighi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Materia
CC = c++
FLAGS = -Wall -Werror -Wextra -pedantic -std=c++98

OBJ_DIR = objs/

FILES = main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp
F_DIR = srcs/
HEADERS = AMateria.hpp Ice.hpp Cure.hpp ICharacter.hpp Character.hpp MateriaSource.hpp IMateriaSource.hpp
H_DIR = includes/

SRCS = $(addprefix $(F_DIR), $(FILES))
INCLUDES = $(addprefix $(H_DIR), $(HEADERS))

OBJS = $(addprefix $(OBJ_DIR), $(FILES:.cpp=.o))

RM = rm -rf

all: $(NAME)

$(OBJ_DIR)%.o: $(F_DIR)%.cpp $(INCLUDES) 
	mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean
