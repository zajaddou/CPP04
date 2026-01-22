
NAME		= Animal

CC			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

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