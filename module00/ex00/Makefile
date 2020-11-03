# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/03 20:09:01 by awerebea          #+#    #+#              #
#    Updated: 2020/11/03 21:11:58 by awerebea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone
CC			= clang++
CFLAGS		= -Wall -Wextra -Werror
OFLAGS		= -O2
DBGFLAGS	= -g

override FLAGS ?= $(CFLAGS)

SRCDIR		= ./
OBJDIR		= ./

SRC	= megaphone

OBJ	= $(addprefix $(OBJDIR), $(SRC:=.o))
DFLS	= $(addprefix $(OBJDIR), $(SRC:=.d))

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CC)		$(FLAGS) $(OBJ) -o $(NAME)
	@echo '------------- All done! --------------'

$(OBJ):		$(OBJDIR)%.o: $(SRCDIR)%.cpp
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
