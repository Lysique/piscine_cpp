# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tamighi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/19 09:30:56 by tamighi           #+#    #+#              #
#    Updated: 2022/03/22 14:38:20 by tamighi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat
CC = c++
FLAGS = -Wall -Werror -Wextra -pedantic -std=c++98

OBJ_DIR = objs/

FILES = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
F_DIR = srcs/
HEADERS = Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp
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
