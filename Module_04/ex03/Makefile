# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/18 09:52:04 by vdomasch          #+#    #+#              #
#    Updated: 2024/12/05 15:02:59 by vdomasch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Materia

SRC_DIR		= srcs/
HEADER_DIR	= headers/

SRC				= $(SRC_DIR)main.cpp			\
				$(SRC_DIR)AMateria.cpp			\
				$(SRC_DIR)Character.cpp			\
				$(SRC_DIR)Cure.cpp				\
				$(SRC_DIR)Ice.cpp				\
				$(SRC_DIR)MateriaSource.cpp

HEADER			= $(HEADER_DIR)AMateria.hpp		\
				$(HEADER_DIR)Character.hpp		\
				$(HEADER_DIR)Cure.hpp			\
				$(HEADER_DIR)Ice.hpp			\
				$(HEADER_DIR)ICharacter.hpp		\
				$(HEADER_DIR)IMateriaSource.hpp	\
				$(HEADER_DIR)MateriaSource.hpp

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