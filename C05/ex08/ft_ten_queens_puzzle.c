/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:36:51 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/17 19:16:44 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_unvalidity(char *pos)
{
	int	i;
	int	j;

	i = -1;
	while (pos[++i])
	{
		j = i;
		while (pos[++j])
			if (pos[i] == pos[j] || pos[i] - i == pos[j] - j
				|| pos[i] + i == pos[j] + j)
				return (j);
	}
	return (0);
}

char	*get_next_pos(char *pos, int i)
{
	int	j;

	while (i >= 0 && pos[i] == '9')
		i--;
	if (i < 0)
		return (NULL);
	pos[i]++;
	j = 0;
	while (++i < 10)
		pos[i] = '0' + j++;
	j = check_unvalidity(pos);
	if (j)
		return (get_next_pos(pos, j));
	return (pos);
}

int	print_pos(char *pos, int rt)
{
	rt += 1;
	write(1, pos, 10);
	write(1, "\n", 1);
	pos = get_next_pos(pos, 9);
	if (!pos)
		return (rt);
	return (print_pos(pos, rt));
}

int	ft_ten_queens_puzzle(void)
{
	char	pos[11];
	int		i;

	i = -1;
	while (++i < 10)
		pos[i] = i + '0';
	pos[i] = 0;
	get_next_pos(pos, 9);
	return (print_pos(pos, 0));
}
