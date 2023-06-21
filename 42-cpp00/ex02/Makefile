# Folders and Names
NAME		= bank
SRCDIR		= .
SRCS		= Account.cpp tests.cpp

# Compiler options
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

all: ${NAME}

${NAME}: ${OBJS}
	@echo "Compiling $@"
	@${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean:
	rm -rf objs


fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re
