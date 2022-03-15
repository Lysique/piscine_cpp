# **************************************************************************** #
:q
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tamighi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/05 10:56:04 by tamighi           #+#    #+#              #
#    Updated: 2022/03/05 11:24:12 by tamighi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie
CC = clang++
FLAGS = -Wall -Werror -Wextra -pedantic -std=c++98

SRCS = main.cpp Zombie.cpp zombieHorde.cpp
INCLUDES = Zombie.hpp
OBJS = $(SRCS:.cpp=.o)

RM = rm -f

all: $(NAME)

%.o: %.cpp $(INCLUDES)
	$(CC) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJS) 
	$(CC) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean
