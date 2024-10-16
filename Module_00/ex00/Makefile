# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/09 10:29:01 by vdomasch          #+#    #+#              #
#    Updated: 2024/10/15 11:22:57 by vdomasch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= megaphone

SRC				= megaphone.cpp

OBJS_DIR		= .objs/

OBJS			= $(SRC:%.cpp=$(OBJS_DIR)%.o)

CPP				= c++

CPPFLAGS		= -Wall -Wextra -Werror

all: 			$(OBJS_DIR) $(NAME)

$(OBJS_DIR)%.o : %.cpp Makefile
					$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME): 		$(OBJS) Makefile
					$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

$(OBJS_DIR):
					mkdir -p $(OBJS_DIR)

clean:			
					rm -rf $(OBJS_DIR)

fclean:			clean
					rm -f $(NAME)

re:				fclean all

.PHONY:			all clean fclean re