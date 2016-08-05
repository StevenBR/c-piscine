# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jthai <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/01 11:37:24 by jthai             #+#    #+#              #
#    Updated: 2016/08/03 14:35:22 by srodrigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    	=   bsq
CFLAGS		+=  -c -Wall -Wextra -Werror
INCLUDES 	=	headers/bsqmain.h \
				headers/list.h \
				squarehelper2.h 
FT_FOLDER	= 	$(addprefix ft_lib/, $(FT_FUNCS))
FT_FUNCS 	=	ft_atoi.c \
				ft_create_elem.c \
				ft_list_push_front.c \
				ft_list_size.c \
				ft_mapgen_error.c \
				ft_putchar.c \
				ft_putnbr.c \
				ft_putstr.c
				# ft_concatn.c \
				# ft_concat.c
CFILES 		= 	bsq.c \
				valid_map_test.c \
				make_square.c \
				squarehelper1.c \
				squarehelper2.c 
OFILES 		= 	$(CFILES:.c=.o)
OFT_FUNCS 	= 	$(FT_FUNCS:.c=.o)
CC			= 	gcc

.PHONY: clean fclean re

all: $(NAME) clean

$(NAME): $(OFILES)
	@$(CC) $(OFILES) $(OFT_FUNCS) -o $(NAME)

$(OFILES):
	@$(CC) $(CFLAGS) $(CFILES) $(FT_FOLDER)
#
# $(FT_FUNCS):
# 	$(CC) $(CFLAGS) $(FT_FOLDER)

clean:
	@/bin/rm -rf $(OFILES) $(OFT_FUNCS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
