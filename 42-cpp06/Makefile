# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/06 14:36:52 by hmaciel-          #+#    #+#              #
#    Updated: 2023/09/28 10:31:48 by hmaciel-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Folders and Names
NAME		= converter
SRCDIR		= .
SRCS		= main.cpp ScalarConverter.cpp
INCLUDES	= ScalarConverter.hpp
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