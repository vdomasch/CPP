# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/18 09:52:04 by vdomasch          #+#    #+#              #
#    Updated: 2024/11/18 12:04:48 by vdomasch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= brain

SRC				= main.cpp			\
				Animal.cpp			\
				Cat.cpp				\
				Dog.cpp				\
				Brain.cpp

HEADER			= Animal.hpp		\
				Cat.hpp				\
				Dog.hpp				\
				Brain.hpp

OBJS_DIR		= .objs/

OBJS			= $(SRC:%.cpp=$(OBJS_DIR)%.o)

CPP				= c++ 

CPPFLAGS		= -std=c++98 -Wall -Wextra -Werror

all: 			$(OBJS_DIR) $(NAME)


$(OBJS_DIR)%.o : %.cpp $(HEADER) Makefile
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