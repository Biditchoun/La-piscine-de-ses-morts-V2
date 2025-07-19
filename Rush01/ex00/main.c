/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:34:11 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/19 22:29:26 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	print_grid(int **grid);
int		**ffree(int **str);
int		handle_error(int **rules, int**grid);
int		check_input(char *str);
int		get_solution(int **rules, int **grid, int size, int line);

void	fill_rules(int **rt, char *str, int size)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	k = -1;
	while (++i < 4)
	{
		j = 0;
		while (j < size)
			if (str[++k] >= '1' && str[k] <= '9')
				rt[i][j++] = str[k] - '0';
		rt[i][j] = 0;
	}
}

int	**initialise_rules(char *str, int size)
{
	int	**rt;
	int	i;

	if (!size)
		return (NULL);
	rt = malloc(sizeof (int *) * 5);
	if (!rt)
		return (NULL);
	i = -1;
	while (++i < 4)
	{
		rt[i] = malloc(sizeof (int) * (size + 1));
		if (!rt[i])
			return (ffree(rt));
	}
	rt[4] = NULL;
	fill_rules(rt, str, size);
	return (rt);
}

int	**initialise_grid(int size)
{
	int	**rt;
	int	i;
	int	j;

	rt = malloc(sizeof (int *) * (size + 1));
	if (!rt)
		return (NULL);
	i = -1;
	while (++i < size)
	{
		rt[i] = malloc(sizeof (int) * (size + 1));
		if (!rt[i])
			return (ffree(rt));
	}
	rt[i] = NULL;
	i = -1;
	while (rt[++i])
	{
		j = -1;
		while (++j < size)
			rt[i][j] = j + 1;
		rt[i][j - 1]--;
		rt[i][j] = 0;
	}
	return (rt);
}

int	main(int argc, char **argv)
{
	int	**rules;
	int	**grid;
	int	size;

	if (argc != 2)
		return (handle_error(NULL, NULL));
	size = check_input(argv[1]);
	rules = initialise_rules(argv[1], size);
	if (!rules)
		return (handle_error(NULL, NULL));
	grid = initialise_grid(size);
	if (!grid)
		return (handle_error(rules, NULL));
	if (!get_solution(rules, grid, size, size - 1))
		return (handle_error(rules, grid));
	print_grid(grid);
	ffree(rules);
	ffree(grid);
}
