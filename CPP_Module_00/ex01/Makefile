# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/17 11:07:47 by vdomasch          #+#    #+#              #
#    Updated: 2024/07/17 16:55:27 by vdomasch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	phonebook

OBJS_DIR			=	.objs

FILES				=	main.cpp			\
						Contact.cpp			\
						PhoneBook.cpp		\
						
OBJS				=	$(FILES:%.cpp=$(OBJS_DIR)/%.o)

HEADERS				=	Contact.hpp		\
						PhoneBook.hpp

CC					=	c++

FLAGS				=	-std=c++98 -Wall -Werror -Wextra

all:				$(OBJS_DIR) $(NAME)

$(OBJS_DIR)/%.o:	%.cpp $(HEADERS)
						$(CC) $(FLAGS) -c $< -o $@

$(NAME):			$(OBJS_DIR) $(OBJS) $(HEADERS) Makefile
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