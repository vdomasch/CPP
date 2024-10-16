# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/17 11:10:03 by vdomasch          #+#    #+#              #
#    Updated: 2024/07/17 12:54:00 by vdomasch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	megaphone

OBJS_DIR			=	.objs

FILES				=	megaphone.cpp

OBJS				=	$(FILES:%.cpp=$(OBJS_DIR)/%.o)

CC					=	c++

FLAGS				=	-std=c++98 -Wall -Werror -Wextra

all:				$(OBJS_DIR) $(NAME)

$(OBJS_DIR)/%.o:	%.cpp
					$(CC) $(FLAGS) -c $< -o $@

$(NAME):			$(OBJS_DIR) $(OBJS) Makefile
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

PHONY: all clean fclean re