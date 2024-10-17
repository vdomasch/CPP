# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 15:11:36 by vdomasch          #+#    #+#              #
#    Updated: 2024/10/17 17:44:35 by vdomasch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= bsp

SRC				= main.cpp		\
				  Fixed.cpp		\
				  Point.cpp		\
				  bsp.cpp

HEADER			= Fixed.hpp		\
				  Point.hpp

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