# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tamighi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/13 16:15:34 by tamighi           #+#    #+#              #
#    Updated: 2022/03/13 16:15:55 by tamighi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap
CC = clang++
FLAGS = -Wall -Werror -Wextra -pedantic -std=c++98

SRCS = main.cpp ClapTrap.cpp
INCLUDES = ClapTrap.hpp
OBJS = $(SRCS:.cpp=.o)

RM = rm -f

all: $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean
