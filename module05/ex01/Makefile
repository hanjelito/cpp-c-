# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 04:01:58 by juan-gon          #+#    #+#              #
#    Updated: 2022/05/06 19:10:47 by juan-gon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= main.cpp Bureaucrat.cpp Form.cpp
OBJS		= ${SRCS:.cpp=.o}
NAME		= a.out
CPP			= c++ 
RM			= rm -f
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98 -pedantic-errors

${NAME}:	${OBJS}
				${CPP} ${CPPFLAGS} -o ${NAME} ${OBJS}
all:		${NAME}
clean:
			${RM} ${OBJS}
fclean:		clean
			${RM} ${NAME}
re:			fclean all

.PHONY:		all clean fclean re