# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/22 11:49:54 by hmaciel-          #+#    #+#              #
#    Updated: 2023/07/03 11:08:29 by hmaciel-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Folders and Names
NAME		= diamond
SRCDIR		= .
SRCS		= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
INCLUDES	= ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
OBJSDIR		= objs
OBJS		= $(SRCS:%.cpp=$(OBJSDIR)/%.o)

# Compiler options
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98 #-Wno-shadow -Wshadow=local

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
