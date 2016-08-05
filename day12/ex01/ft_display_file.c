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

#include "cathead.h"

void	ft_errno(int num, char *str)
{
	ft_putstr("cat: ");
	if (num == 2)
	{
		ft_putstr(str);
		ft_putstr(": No such file or directory");
	}
	else if (num == 13)
	{
		ft_putstr(str);
		ft_putstr(": Is a directory\n");
	}
	else if (num == 21)
	{
		ft_putstr(str);
		ft_putstr(": Is a directory\n");
	}
}

void	display_file(char *str)
{
	char	buf[28];
	int		fd;

	fd = open(str, O_RDONLY | O_RDWR);
	if (fd == -1)
	{
		ft_errno(errno, str);
	}
	else
	{
		while (read(fd, &buf, 1) != 0)
		{
			write(1, &buf, 1);
		}
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	int index;

	if (argc <= 1)
	{
		write(1, "File name(s) missing", 17);
		return (0);
	}
	index = 0;
	while (++index < argc)
	{
		display_file(argv[index]);
	}
	return (0);
}
