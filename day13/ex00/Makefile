# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/28 11:30:39 by srodrigu          #+#    #+#              #
#    Updated: 2016/07/29 15:18:49 by srodrigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btree_create_node
HEADER = ft_btree.h
CFLAGS += -c -Wall -Wextra -Werror
CFILES = 	btree_create_node.c \
			ft_putstr.c \
			ft_putchar.c
OFILES =	$(CFILES:.c=.o)
CC = gcc

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(CFILES) -I$(HEADER)
	$(CC) $(OFILES) -o $(NAME)

clean:
	/bin/rm -rf $(OFILES)

fclean: clean
	/bin/rm -f $(NAME)
