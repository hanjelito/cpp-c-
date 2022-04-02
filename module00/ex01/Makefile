# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 04:02:25 by juan-gon          #+#    #+#              #
#    Updated: 2022/04/02 04:02:26 by juan-gon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp Contact.cpp PhoneBook.cpp
HEADERS	= Contact.h PhoneBook.h
OBJS	= ${SRCS:.cpp=.o}
NAME	= Phonebook
CLANG	= c++ 
RM		= rm -f
CFLAGS	= -Wall -Werror -Wextra -std=c++98

${NAME}:	${OBJS}
				${CLANG} ${CFLAGS} -o ${NAME} ${OBJS}
all:		${NAME}
clean:
			${RM} ${OBJS}
fclean:		clean
			${RM} ${NAME}
re:			fclean all

.PHONY:		all clean fclean re