/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_solution.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:20:15 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/20 21:58:53 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	search_in_line(int *line, int n);
int	search_in_column(int **grid, int n, int col);

int	check_column(int **rules, int **grid, int column)
{
	int	up;
	int	down;
	int	i;
	int	comp;

	i = -1;
	while (grid[++i])
		if (search_in_column(&grid[i + 1], grid[i][column], column))
			return (0);
	i = -1;
	up = 0;
	comp = 0;
	while (grid[++i])
		if (grid[i][column] > comp && ++up)
			comp = grid[i][column];
	down = 0;
	comp = 0;
	while (--i > -1)
		if (grid[i][column] > comp && ++down)
			comp = grid[i][column];
	if (rules[0][column] == up && rules[1][column] == down)
		return (1);
	return (0);
}

int	check_line(int **rules, int **grid, int line)
{
	int	left;
	int	right;
	int	i;
	int	comp;

	i = -1;
	while (grid[line][++i])
		if (search_in_line(&grid[line][i + 1], grid[line][i]))
			return (0);
	i = -1;
	left = 0;
	comp = 0;
	while (grid[line][++i])
		if (grid[line][i] > comp && ++left)
			comp = grid[line][i];
	right = 0;
	comp = 0;
	while (--i > -1)
		if (grid[line][i] > comp && ++right)
			comp = grid[line][i];
	if (rules[2][line] == left && rules[3][line] == right)
		return (1);
	return (0);
}

void	remove_repeats(int *line, int size)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	while (line[++i])
	{
		j = i;
		while (line[++j])
		{
			if (line[i] == line[j])
			{
				k = -1;
				while (++k < j && line[j] < size)
				{
					if (line[k] == line[j])
					{
						line[j]++;
						k = -1;
					}
				}
			}
		}
	}
}

int	get_next_line(int **rules, int **grid, int size, int line)
{
	int	i;

	i = size - 1;
	while (i > -1 && grid[line][i] >= size)
		i--;
	if (i < 0)
		return (0);
	grid[line][i]++;
	while (grid[line][++i])
		grid[line][i] = 1;
	remove_repeats(grid[line], size);
	if (!check_line(rules, grid, line))
		return (get_next_line(rules, grid, size, line));
	return (1);
}

int	get_solution(int **rules, int **grid, int size, int line)
{
	int	i;
	int	c;

	while (line > -1)
	{
		while (get_next_line(rules, grid, size, line))
		{
			if (line < size - 1)
				return (get_solution(rules, grid, size, line + 1));
			c = 0;
			i = -1;
			while (grid[++i])
				if (check_column(rules, grid, i))
					c++;
			if (c == size)
				return (1);
		}
		i = -1;
		while (grid[line][++i])
			grid[line][i] = 1;
		line--;
	}
	return (0);
}

/*
	Here is another version of get_solution, it crashes faster


	if (line < 0)
		return (0);
	while (get_next_line(rules, grid, size, line))
	{
		if (line < size - 1)
			return (get_solution(rules, grid, size, line + 1));
		c = 0;
		i = -1;
		while (grid[++i])
			if (check_column(rules, grid, i))
				c++;
		if (c == size)
			return (1);
	}
	i = -1;
	while (grid[line][++i])
		grid[line][i] = 1;
	return (get_solution(rules, grid, size, line - 1));


	As you may notice, remove_repeats was the last hope to get the program
	to run faster. It absolutely does that ! But not enough.
	It definitely can run better, but that will be all for this project.
       	I think, all in all, we would have loved for more time.
*/
