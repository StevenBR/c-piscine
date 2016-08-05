/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 11:32:36 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/28 11:32:39 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *str);

void display_file(int fd)
{
	char buf;

	if(fd == -1)
	{
		write(1, "error opening file", 18);
		return ;
	}
	while (read(fd, &buf, 1) != 0)
	{
		write(1, &buf, 1);
	}
}

int main(int argc, char **argv)
{
	int fd;

	if(argc <= 1)
	{
		write(1, "File name missing", 17);
		return (0);
	}
	if(argc != 2)
	{
		write(1, "Too many arguments", 18);
		return (0);
	}

	fd = open(argv[1], O_RDONLY);

	display_file(fd);
	close(fd);
	return (0);
}
