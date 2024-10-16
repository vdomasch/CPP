# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/21 11:36:54 by vdomasch          #+#    #+#              #
#    Updated: 2024/07/21 12:01:22 by vdomasch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME							=		harl2.0

OBJS_DIR						=		.objs

FILES							=		main.cpp		\
										Harl.cpp

HEADERS							=		Harl.hpp	

OBJS							=		$(FILES:%.cpp=$(OBJS_DIR)/%.o)

CC								=		c++

FLAGS							=		-std=c++98 -Wall -Werror -Wextra

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