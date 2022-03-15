# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tamighi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/06 15:53:53 by tamighi           #+#    #+#              #
#    Updated: 2022/03/05 08:47:32 by tamighi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account
CC = clang++
FLAGS = -Wall -Werror -Wextra -pedantic -std=c++98

SRCS = test.cpp Account.cpp
OBJS = $(SRCS:.cpp=.o)

RM = rm -f

all: $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean
