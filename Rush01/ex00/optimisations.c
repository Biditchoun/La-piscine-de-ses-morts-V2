/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimisations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 12:47:28 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/20 22:12:40 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	**ffree(int **str);

int	write_line_opt(int **opt, int c, int size, int *i)
{
	int	j;

	j = -1;
	while (++j < size)
	{
		opt[c][2] = size - j;
		if (i[0] < 2)
			opt[c][1] = i[1];
		else
			opt[c][0] = i[1];
		if (!i[0])
			opt[c++][0] = size - j - 1;
		else if (i[0] == 1)
			opt[c++][0] = j;
		else if (i[0] == 2)
			opt[c++][1] = size - j - 1;
		else
			opt[c++][1] = j;
	}
	return (size);
}

int	write_1_opt(int *rt, int size, int i, int j)
{
	rt[3] = 0;
	rt[2] = size;
	if (i < 2)
		rt[1] = j;
	else
		rt[0] = j;
	if (!i)
		rt[0] = 0;
	else if (i == 1)
		rt[0] = size - 1;
	else if (i == 2)
		rt[1] = 0;
	else
		rt[1] = size - 1;
	return (1);
}

void	write_optimisations(int **rules, int **rt, int size)
{
	int	i[2];
	int	c;

	i[0] = -1;
	c = 0;
	while (rules[++i[0]])
	{
		i[1] = -1;
		while (rules[i[0]][++i[1]])
		{
			if (rules[i[0]][i[1]] == 1)
				c += write_1_opt(rt[c], size, i[0], i[1]);
			if (rules[i[0]][i[1]] == size)
				c += write_line_opt(rt, c, size, i);
		}
	}
}

int	count_optimisations(int **rules, int size)
{
	int	rt;
	int	i;
	int	j;

	rt = 0;
	i = -1;
	while (rules[++i])
	{
		j = -1;
		while (rules[i][++j])
		{
			if (rules[i][j] == 1)
				rt++;
			if (rules[i][j] == size)
				rt += size;
		}
	}
	return (rt);
}

int	**get_optimisations(int **rules, int size)
{
	int	**rt;
	int	i;
	int	c;

	c = count_optimisations(rules, size);
	rt = malloc(sizeof (int *) * (c + 1));
	if (!rt)
		return (NULL);
	i = -1;
	while (++i < c)
	{
		rt[i] = malloc(sizeof (int) * 4);
		if (!rt[i])
			return (ffree(rt));
	}
	rt[i] = NULL;
	write_optimisations(rules, rt, size);
	return (rt);
}

//So, basically, this whole page remains technically unused.
//It is still there as to discuss how to use it.
