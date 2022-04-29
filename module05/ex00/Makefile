# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 04:01:58 by juan-gon          #+#    #+#              #
#    Updated: 2022/04/29 02:14:15 by juan-gon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= main.cpp Bureaucrat.cpp
OBJS		= ${SRCS:.cpp=.o}
NAME		= a.out
CPP			= c++ 
RM			= rm -f
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98

${NAME}:	${OBJS}
				${CPP} ${CPPFLAGS} -o ${NAME} ${OBJS}
all:		${NAME}
clean:
			${RM} ${OBJS}
fclean:		clean
			${RM} ${NAME}
re:			fclean all

.PHONY:		all clean fclean re