/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 12:35:17 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/25 20:08:28 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "ft_stock_str.h"

void	putnbr(int nb)
{
	if (nb > 9)
		putnbr(nb / 10);
	nb = nb % 10 + '0';
	write(1, &nb, 1);
}

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = -1;
	while (par[++i].str)
	{
		write(1, par[i].str, par[i].size);
		write(1, "\n", 1);
		putnbr(par[i].size);
		write(1, "\n", 1);
		write(1, par[i].copy, str_len(par[i].copy));
		write(1, "\n", 1);
	}
}
