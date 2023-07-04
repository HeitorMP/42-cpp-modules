# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/01 14:54:49 by hmaciel-          #+#    #+#              #
#    Updated: 2023/07/04 18:08:38 by hmaciel-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Folders and Names
NAME		= rpg
SRCDIR		= .
SRCS		= main.cpp AMateria.cpp Character.cpp Ice.cpp Cure.cpp
INCLUDES	= AMateria.hpp Ice.hpp Cure.hpp ICharacter.hpp Character.hpp
OBJSDIR		= objs
OBJS		= $(SRCS:%.cpp=$(OBJSDIR)/%.o)

# Compiler options
CC			= c++
CFLAGS		= #-Wall -Wextra -Werror -std=c++98
all: ${NAME} ${INCLUDES}

${NAME}: ${OBJS}
	@echo "Compiling $@"
	@${CC} ${CFLAGS} -o ${NAME} ${OBJS}

${OBJS}: ${OBJSDIR}/%.o: ${SRCDIR}/%.cpp
	@mkdir -p ${@D}
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -rf ./objs

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re
