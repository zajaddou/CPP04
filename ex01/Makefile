# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zajaddou <zajaddou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/10 14:16:13 by zajaddou          #+#    #+#              #
#    Updated: 2026/01/21 16:21:16 by zajaddou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Animal

CC			= c++
CXXFLAGS	= -std=c++98

SRCS		= main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJS		= $(SRCS:.cpp=.o)

RM			= rm -rf

all: $(NAME)

$(NAME): $(OBJS) Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
	@$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	@$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all


run: all clean
	@clear
	@./${NAME}
	@rm -rf ${NAME}