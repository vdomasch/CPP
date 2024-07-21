# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/18 17:05:34 by vdomasch          #+#    #+#              #
#    Updated: 2024/07/18 18:40:24 by vdomasch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME							=	   violence

OBJS_DIR						=	   .objs

FILES							=		main.cpp	\
										Weapon.cpp	\
										HumanA.cpp	\
										HumanB.cpp

OBJS							=	   $(FILES:%.cpp=$(OBJS_DIR)/%.o)

CC								=		c++

FLAGS							=		-std=c++98 -Wall -Werror -Wextra

all:							$(OBJS_DIR) $(NAME)

$(OBJS_DIR)/%.o:				%.cpp
									$(CC) $(FLAGS) -c $< -o $@

$(NAME):						$(OBJS_DIR) $(OBJS) Makefile
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