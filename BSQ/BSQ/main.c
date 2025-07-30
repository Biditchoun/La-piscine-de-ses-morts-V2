/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:08:05 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/29 19:02:51 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	handle_eol(int fd, char *mess, char *str, int ac_i)
{
	if (mess)
		write(fd, mess, ft_strlen(mess));
	free(str);
	if (ac_i > 1)
		write(1, "\n", 1);
	return (fd - 1);
}

int	handle_this_map(int ac, char **av, int i)
{
	char		*str;
	char		**map;
	t_square	square;

	str = file_into_str(ac, av, i);
	if (!str)
		return (handle_eol(1, "map error\n", NULL, ac - i));
	if (check_input(str))
		return (handle_eol(1, "map error\n", str, ac - i));
	map = str_into_map(str);
	if (!map)
		return (handle_eol(2, "malloc error\n", str, ac - i));
	square = find_biggest_square(map, str);
	update_map(square, map, str);
	print_map(map);
	free(map);
	return (handle_eol(1, NULL, str, ac - i));
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 1)
		i = -1;
	while (++i < ac)
		handle_this_map(ac, av, i);
	return (0);
}
