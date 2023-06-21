# Folders and Names
NAME		= book
SRCDIR		= srcs
OBJSDIR		= objs
CLASSDIR	= classes

# Files definition
SRCS		= phonebook.cpp \
			  utils.cpp

CLASSES		= Contact.class.cpp \
			  PhoneBook.class.cpp

OBJS		= $(SRCS:%.cpp=$(OBJSDIR)/%.o)
CLASS_OBJS	= $(CLASSES:%.cpp=$(OBJSDIR)/%.o)

# Compiler options
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

all: ${NAME}

${NAME}: ${OBJS} ${CLASS_OBJS}
	@echo "Compiling $@"
	@${CC} ${CFLAGS} -o ${NAME} ${OBJS} ${CLASS_OBJS}

${OBJS}: ${OBJSDIR}/%.o: ${SRCDIR}/%.cpp
	@mkdir -p ${@D}
	${CC} ${CFLAGS} -c $< -o $@

${CLASS_OBJS}: ${OBJSDIR}/%.o: ${CLASSDIR}/%.cpp
	@mkdir -p ${@D}
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -rf ./objs

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re
