# Folders and Names
NAME		= rep
TESTNAME	= test
SRCDIR		= .
SRCS		= main.cpp ft_replace.cpp
OBJSDIR		= objs
OBJS		= $(SRCS:%.cpp=$(OBJSDIR)/%.o)

# Compiler options
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

all: ${NAME}

${NAME}: ${OBJS}
	@echo "Compiling $@"
	@${CC} ${CFLAGS} -o ${NAME} ${OBJS}

${OBJS}: ${OBJSDIR}/%.o: ${SRCDIR}/%.cpp
	@mkdir -p ${@D}
	${CC} ${CFLAGS} -c $< -o $@

test: all
	@${CC} ${CFLAGS} ft_replace.cpp test.cpp -o ${TESTNAME}

clean:
	rm -rf ./objs

fclean: clean
	rm -rf ${NAME}
	rm -rf test

re: fclean all

.PHONY: all clean fclean re