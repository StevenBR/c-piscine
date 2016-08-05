# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/28 11:30:39 by srodrigu          #+#    #+#              #
#    Updated: 2016/07/28 11:46:18 by srodrigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
HEADER = fileman.h
CFLAGS += -c -Wall -Wextra -Werror
CFILES = 	ft_display_file.c
OFILES =	$(CFILES:.c=.o)
CC = gcc

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(CFILES) -I$(HEADER) #compile into .o
	$(CC) $(OFILES) -o $(NAME)	#use .o to compile executable by the name ft_display_file

clean:
	/bin/rm -rf $(OFILES) #remove .o files

fclean: clean
	/bin/rm -f $(NAME)	#remove .o files as well as the executable
