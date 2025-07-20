/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:34:11 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/20 22:07:17 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_input(char *str);
int		handle_error(int **rules, int**grid, int **opt);
int		**get_optimisations(int **rules, int size);
int		get_solution(int **rules, int **grid, int size, int line);
void	print_grid(int **grid);
int		**ffree(int **str);

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

	if (!size || size > 5)
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
	int	**opt;
	int	size;

	if (argc != 2)
		return (handle_error(NULL, NULL, NULL));
	size = check_input(argv[1]);
	rules = initialise_rules(argv[1], size);
	if (!rules)
		return (handle_error(NULL, NULL, NULL));
	grid = initialise_grid(size);
	if (!grid)
		return (handle_error(rules, NULL, NULL));
	opt = get_optimisations(rules, size);
	if (!opt)
		return (handle_error(rules, grid, NULL));
	if (!get_solution(rules, grid, size, size - 1))
		return (handle_error(rules, grid, opt));
	print_grid(grid);
	ffree(rules);
	ffree(grid);
	ffree(opt);
}

/*
We were not able to implement the optimisation adresses.
Mainly because of the 4 arguments per function limit.
So basically, the table opt is not used at all.
It would have looked like something akin as the thing below.
(We spent the  whole sunday on that).


	int i = -1;
	while (opt[++i])
		grid [opt[i][0]][opt[i][1]] = opt[i][2];


Another wall, was the fact we did not implement a proper backtrack.
That means the program can crash, as it can ask for too much resources.
To circumvent that, we made it do an automatic error for size > 5.
The goal was then for me to implement optimisations,
that way we could rise the limit.
However, given how the code is written, I feel like we should start over again
completely with, in mind, while writing the code, a way to add optimisations.
Alas, we did not find a proper way to implement them.
It truly feels like a waste of a day, but that's code I guess.
*/
