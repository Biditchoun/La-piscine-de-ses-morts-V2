/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_and_print_map.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaegels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 14:05:55 by shaegels          #+#    #+#             */
/*   Updated: 2025/07/29 20:23:14 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	update_map(t_square square, char **map, char *str)
{
	char	c;
	int		i;
	int		j;

	i = ft_strlen(str);
	c = str[i - 1];
	i = 0;
	while (i < square.size)
	{
		j = 0;
		while (j < square.size)
		{
			map[square.x + i][square.y + j] = c;
			j++;
		}
		i++;
	}
	return ;
}

void	print_map(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			write(1, &map[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return ;
}
