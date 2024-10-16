# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/27 09:56:48 by vdomasch          #+#    #+#              #
#    Updated: 2024/07/27 10:28:15 by vdomasch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME							=	serena

OBJS_DIR						=	.objs

FILES							=	main.cpp				\
									ClapTrap.cpp			\
									ScavTrap.cpp

HEADERS							=	ClapTrap.hpp			\
									ScavTrap.hpp

OBJS							=	$(FILES:%.cpp=$(OBJS_DIR)/%.o)

CC								=	c++

FLAGS							=	-std=c++98 -Wall -Werror -Wextra

all:							$(OBJS_DIR) $(NAME)

$(OBJS_DIR)/%.o:				%.cpp $(HEADERS)
									$(CC) $(FLAGS) -c $< -o $@

$(NAME):						$(OBJS_DIR) $(OBJS) $(HEADERS) Makefile
									$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR):
									mkdir -p $(OBJS_DIR)

clean:
									rm -rf $(OBJS_DIR)

fclean:
									$(MAKE) clean
									rm -rf $(NAME)

re:
									$(MAKE) fclean all

.PHONY: all clean fclean re