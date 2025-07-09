/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 18:14:50 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/08 20:20:04 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	putnbr(int nb)
{
	if (nb > 9)
		putnbr(nb / 10);
	nb = nb % 10 + '0';
	write(1, &nb, 1);
}

void	ft_putnbr(int nb)
{
	int	i;

	if (nb == INT_MIN)
		write (1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		putnbr(nb);
	}
}
