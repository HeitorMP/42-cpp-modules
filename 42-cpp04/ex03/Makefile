# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/01 14:54:49 by hmaciel-          #+#    #+#              #
#    Updated: 2023/07/05 13:04:04 by hmaciel-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Folders and Names
NAME		= rpg
SRCDIR		= .
SRCS		= main.cpp AMateria.cpp Character.cpp Ice.cpp Cure.cpp MateriaSource.cpp
INCLUDES	= AMateria.hpp Ice.hpp Cure.hpp ICharacter.hpp Character.hpp IMateriaSource.hpp MateriaSource.hpp
OBJSDIR		= objs
OBJS		= $(SRCS:%.cpp=$(OBJSDIR)/%.o)

# Compiler options
CC			= c++
CFLAGS		= -g -Wall -Wextra -Werror -std=c++98
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
