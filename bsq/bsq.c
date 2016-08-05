/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 16:50:34 by srodrigu          #+#    #+#             */
/*   Updated: 2016/08/01 16:50:39 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/bsqmain.h"
#include "headers/list.h"

t_list *line_to_link(int fd)
{
	char *c;
	char buffer;
	t_list *list;

	list = NULL;
	while (read(fd, &buffer, 1) != 0)
	{
		if (buffer != '\n')
		{
			c = (char*)malloc(sizeof(char));
			*c = buffer;
			ft_list_push_front(&list, c);
		}
		else
			break ;
	}
	if (list == NULL)
	{return (0);}
	return list;
}

char **map_init(char *params_list, int row_count, t_list *first_row, int fd)
{
	int col_count;
	int index;
	char **map;

	map = NULL;
	col_count =	ft_list_size(first_row);
	index = col_count;
	map = (char**)malloc(sizeof(char*) * row_count);
	map[0] = (char*)malloc(sizeof(char) * col_count + 1);
	map[0][index] = '\n';
	while (index > 0)
	{
		map[0][index-1] = *(char*)first_row->data;
		first_row = first_row->next;
		index--;
	}
	if(val_row(map[index], params_list[0], params_list[1], params_list[2]) < 0)
		return (0);
	index = 1;
	map[index] = (char*)malloc(sizeof(char*) * col_count + 1);
	while (read(fd, map[index], col_count + 1))
	{
		if(val_row(map[index], params_list[0], params_list[1], params_list[2]) < 0)
			return (0);
		index++;
		if (index < row_count)
			map[index] = (char*)malloc(sizeof(char*) * col_count + 1);
		else
			break;
	}
	return map;
}


char *parse_params(char *params, t_list *param_list)
{
	int		row_count;
	int		index;

	index = 3;
	row_count = 0;
	params = (char*)malloc(sizeof(char) * 3);
	while (--index >= 0  && param_list)
	{
		params[index] = (char)malloc(sizeof(char*));
		params[index] = *param_list->data;
		param_list = param_list->next;
	}
	if(check_char(params) < 0)
	{
		ft_mapgen_error(-1);
		return 0;
	}
	return params;
}

int link_to_int(t_list *list)
{
	char *str;
	int count;
	int str_count;
	int i =0;

	str_count = ft_list_size(list);
	count = str_count;
	str = malloc(sizeof(char*));
	while(i < 3)
	{
		list = list->next;
		str_count--;
		i++;
	}
	while(str_count > 0)
	{
		str[str_count] = *list->data;
		list = list->next;
		str_count--;
	}
	count = ft_atoi(str);
	return count;
}

void ft_read_input(fd)
{
	char	**map;
	char	*params_arr;
	t_list	*params_list;
	t_list	*row_list;
	int		col_len;
	int		row_count;

	params_arr = NULL;
	params_list = line_to_link(fd);
	row_list = line_to_link(fd);
	col_len = ft_list_size(row_list);
	params_arr = parse_params(params_arr, params_list);
	row_count = link_to_int(params_list);
	map = map_init(params_arr, row_count, row_list, fd);
	if(params_list == 0 || row_list == 0 || col_len == 0 ||
		params_arr == 0 || row_count == 0 || map == 0
		|| val_map(map, row_count, col_len, params_arr) < 0)
	{
		ft_mapgen_error(-1);
		return;
	}
	make_square(map, col_len, row_count, params_arr);
}

int main(int ac, char **av)
{
	int index;
	int fd;

	index = 0;
	if (ac <= 1)
	{
		ft_read_input(0);
	}
	else
	{
		while (++index < ac)
		{
			fd = open(av[index], O_RDONLY);
			if(fd == -1)
			{
				ft_mapgen_error(fd);
				return (1);
			}
			else
			{
				ft_read_input(fd);
			}
		}
	}
	return (0);
}
