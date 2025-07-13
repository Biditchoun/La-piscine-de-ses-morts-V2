/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 18:36:27 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/13 20:43:40 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	unsigned char	c;
	char			*base;
	int				i;

	if (!str)
		return ;
	base = "0123456789abcdef";
	i = -1;
	while (str[++i])
	{
		c = (unsigned char)str[i];
		if (c > 31 && c < 127)
			write(1, &c, 1);
		else
		{
			write(1, "\\", 1);
			write(1, &base[c / 16], 1);
			write(1, &base[c % 16], 1);
		}
	}
}
