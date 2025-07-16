/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:54:47 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/16 15:12:04 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

unsigned int	check_base(char *base)
{
	int	i;
	int	j;

	if (!base)
		return (0);
	i = -1;
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i;
		while (base[++j])
			if (base[i] == base[j])
				return (0);
	}
	if (i < 2)
		return (0);
	return ((unsigned int) i);
}

void	putnbr_base(unsigned int nb, char *base, unsigned int d)
{
	if (nb >= d)
		putnbr_base(nb / d, base, d);
	write(1, &base[nb % d], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nb;
	unsigned int	d;

	d = check_base(base);
	if (!d)
		return ;
	else
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nb = -nbr;
		}
		else
			nb = nbr;
		putnbr_base(nb, base, d);
	}
}
