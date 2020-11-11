# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awerebea <awerebea@student.21-school.ru>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/09 17:35:29 by awerebea          #+#    #+#              #
#    Updated: 2020/11/11 14:48:50 by awerebea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= replace
CC			= clang++
CFLAGS		= -Wall -Wextra -Werror
OFLAGS		= -O2
DBGFLAGS	= -g

override FLAGS ?= $(CFLAGS)

SRC	= main

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

clean_all: fclean
	rm -f *.replace

debug:
	make FLAGS="$(CFLAGS) $(DBGFLAGS)" all

re:	fclean all

.PHONY:	all \
	clean \
	clean_all \
	debug \
	fclean \
	re
