# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/30 14:03:26 by awerebea          #+#    #+#              #
#    Updated: 2020/12/06 13:40:49 by awerebea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= a.out
CC			= clang++
CFLAGS		= -Wall -Wextra -Werror
OFLAGS		= -O2
DBGFLAGS	= -g

override FLAGS ?= $(CFLAGS)

SRC		= main

OBJ		= $(SRC:=.o)
DFLS	= $(SRC:=.d)

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CC)		$(FLAGS) $(OBJ) -o $(NAME)
	@echo '------------- All done! --------------'

$(OBJ):		%.o: %.cpp
	$(CC)		$(FLAGS) -c $< -o $@ -MMD

include $(wildcard $(addprefix $(OBJDIR), $(DFLS)))

clean:
	rm -f	$(OBJ) $(DFLS)

fclean:	clean
	rm -f	$(NAME)

debug:
	make FLAGS="$(CFLAGS) $(DBGFLAGS)" all

re:	fclean all

.PHONY:	all \
	clean \
	debug \
	fclean \
	re
