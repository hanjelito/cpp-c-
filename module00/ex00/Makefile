# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 04:03:05 by juan-gon          #+#    #+#              #
#    Updated: 2022/04/02 04:03:06 by juan-gon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= megaphone.cpp
OBJS	= ${SRCS:.cpp=.o}
NAME	= megaphone
CLANG	= clang++ 
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