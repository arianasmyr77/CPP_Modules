# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/23 12:14:07 by marvin            #+#    #+#              #
#    Updated: 2025/07/23 12:14:07 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zwar

SRCS = Weapon.cpp HumanA.cpp HumanB.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

CXX = g++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re