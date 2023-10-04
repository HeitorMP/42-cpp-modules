# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/06 14:36:52 by hmaciel-          #+#    #+#              #
#    Updated: 2023/10/04 23:16:10 by hmaciel-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Folders and Names
NAME		= easyfind
SRCDIR		= .
SRCS		= main.cpp
INCLUDES	= easyfind.hpp
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