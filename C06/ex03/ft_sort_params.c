/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:50:02 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/21 21:17:10 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	if (s1 == s2)
		return (0);
	i = -1;
	while (s1[++i] || s2[i])
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}

void	write_argv(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[++i])
	{
		j = 0;
		while (argv[i][j])
			j++;
		write (1, argv[i], j);
		write (1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	char	*buff;
	int		i;
	int		j;

	(void)argc;
	i = 0;
	while (argv[++i])
	{
		j = i;
		while (argv[++j])
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				buff = argv[i];
				argv[i] = argv[j];
				argv[j] = buff;
			}
		}
	}
	write_argv(argv);
}
