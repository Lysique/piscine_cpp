# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tamighi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/05 10:56:04 by tamighi           #+#    #+#              #
#    Updated: 2022/03/06 11:05:50 by tamighi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie
CC = clang++
FLAGS = -Wall -Werror -Wextra -pedantic -std=c++98

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
INCLUDES = Zombie.hpp
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
