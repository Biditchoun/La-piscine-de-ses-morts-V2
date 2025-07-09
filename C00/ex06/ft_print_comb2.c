/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:42:23 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/09 17:18:00 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_nb(int i, int j, int ii, int jj)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, " ", 1);
	write(1, &ii, 1);
	write(1, &jj, 1);
	if (i != '9' || j != '8')
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	ii;
	int	jj;

	i = '0' - 1;
	while (++i <= '9')
	{
		j = '0' - 1;
		while (++j <= '9')
		{
			ii = i - 1;
			while (++ii <= '9')
			{
				jj = '0' - 1;
				if (i == ii)
					jj = j;
				while (++jj <= '9')
					write_nb(i, j, ii, jj);
			}
		}
	}
}
