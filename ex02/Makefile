# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/26 16:14:34 by ymafaman          #+#    #+#              #
#    Updated: 2024/05/27 06:17:42 by ymafaman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

CPP_FILES = tests.cpp Account.cpp

OBJ_FILES = $(CPP_FILES:.cpp=.o)

EXEC = ATM

all : $(EXEC)

$(EXEC) : $(OBJ_FILES)
	$(CPP) $(FLAGS) $(OBJ_FILES) -o $(EXEC)

%.o: %.cpp Account.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ_FILES)

fclean : clean
	rm -rf $(EXEC)