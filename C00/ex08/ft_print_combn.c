/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 18:51:07 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/09 12:56:34 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_combination(char *comb, int n)
{
	write(1, comb, n);
	if (comb[0] < 10 - n + '0')
		write(1, ", ", 2);
}

void	initialise(char *comb, int n)
{
	int	i;

	i = -1;
	while (++i < 9)
		comb[i] = ' ';
	while (n--)
		comb[n] = n + '0';
}

void	ft_print_combn(int n)
{
	char	comb[9];
	int		i;

	initialise(comb, n);
	write_combination(comb, n);
	while (comb[0] < 10 - n + '0')
	{
		i = 1;
		while (comb[n - i] == 10 - i + '0')
			i++;
		comb[n - i]++;
		while (--i)
			comb[n - i] = comb[n - i - 1] + 1;
		write_combination(comb, n);
	}
	return ;
}
