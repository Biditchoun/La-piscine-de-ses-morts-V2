/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:01:49 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/20 22:09:21 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	**ffree(int **str)
{
	int	i;

	i = -1;
	while (str[++i])
		free(str[i]);
	free(str[i]);
	free(str);
	return (NULL);
}

int	handle_error(int **rules, int **grid, int **opt)
{
	write(1, "Error\n", 6);
	if (rules)
		ffree(rules);
	if (grid)
		ffree(grid);
	if (opt)
		ffree(opt);
	return (0);
}

void	print_grid(int **grid)
{
	char	c;
	int		i;
	int		j;

	i = -1;
	while (grid[++i])
	{
		j = -1;
		while (grid[i][++j])
		{
			c = grid[i][j] + 48;
			write(1, &c, 1);
			if (grid[i][j + 1])
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}

int	search_in_line(int *line, int n)
{
	int	i;

	i = -1;
	while (line[++i])
		if (line[i] == n)
			return (1);
	return (0);
}

int	search_in_column(int **grid, int n, int col)
{
	int	i;

	i = -1;
	while (grid[++i])
		if (grid[i][col] == n)
			return (1);
	return (0);
}
