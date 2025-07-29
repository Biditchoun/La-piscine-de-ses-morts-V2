/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_biggest_square.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaegels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 09:49:46 by shaegels          #+#    #+#             */
/*   Updated: 2025/07/29 20:24:29 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	is_square_valid(t_square current_square, char **map, char c)
{
	int	i;
	int	j;

	i = 0;
	while (map[current_square.x + i] && i <= current_square.size)
	{
		j = 0;
		while (j <= current_square.size)
		{
			if (map[current_square.x + i][current_square.y + j] != c)
				return (0);
			j++;
		}
		i++;
	}
	if (i > current_square.size)
		return (1);
	return (0);
}

t_square	find_square(char **map, char c, int l)
{
	t_square	current_square;
	t_square	biggest_square;
	int			i;
	int			j;

	i = 0;
	current_square.size = 0;
	biggest_square.size = -1;
	while (i < l)
	{
		j = 0;
		while (j <= ft_strlen(map[0]))
		{
			current_square.x = i;
			current_square.y = j;
			while (is_square_valid(current_square, map, c) && map[i])
				current_square.size++;
			if (current_square.size > biggest_square.size)
				biggest_square = current_square;
			j++;
		}
		i++;
	}
	return (biggest_square);
}

t_square	find_biggest_square(char **map, char *str)
{
	char	c;
	int		i;
	int		l;

	l = ft_atoi(str);
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	c = str[i];
	return (find_square(map, c, l));
}
