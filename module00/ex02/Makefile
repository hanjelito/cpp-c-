# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 04:01:58 by juan-gon          #+#    #+#              #
#    Updated: 2022/04/02 04:02:55 by juan-gon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= Account.cpp tests.cpp
OBJS	= ${SRCS:.cpp=.o}
NAME	= tests
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