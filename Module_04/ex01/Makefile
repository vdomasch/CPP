# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/18 09:52:04 by vdomasch          #+#    #+#              #
#    Updated: 2024/12/05 14:49:36 by vdomasch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= brain

SRC_DIR		= srcs/
HEADER_DIR	= headers/

SRC				= $(SRC_DIR)main.cpp			\
				$(SRC_DIR)Animal.cpp			\
				$(SRC_DIR)Cat.cpp				\
				$(SRC_DIR)Dog.cpp				\
				$(SRC_DIR)Brain.cpp

HEADER			= $(HEADER_DIR)Animal.hpp		\
				$(HEADER_DIR)Cat.hpp			\
				$(HEADER_DIR)Dog.hpp			\
				$(HEADER_DIR)Brain.hpp

OBJS_DIR		= .objs/

OBJS			= $(SRC:$(SRC_DIR)%.cpp=$(OBJS_DIR)%.o)

CPP				= c++ 

CPPFLAGS		= -std=c++98 -Wall -Wextra -Werror -I$(HEADER_DIR)

all: 			$(OBJS_DIR) $(NAME)

$(OBJS_DIR)%.o : $(SRC_DIR)%.cpp $(HEADER) Makefile
					$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME): 		$(OBJS) $(HEADER) Makefile
					$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

$(OBJS_DIR):
					mkdir -p $(OBJS_DIR)

clean:			
					rm -rf $(OBJS_DIR)

fclean:			clean
					rm -f $(NAME)

re:				fclean all

.PHONY:			all clean fclean re