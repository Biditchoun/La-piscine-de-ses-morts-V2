/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 19:41:59 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/13 20:36:46 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_address(char *base, long addr, int i)
{
	if (i < 15)
		print_address(base, addr/16, i + 1);
	write(1, &base[addr % 16], 1);
}

void	print_hex_chars(char *base, char *addr, unsigned int lim)
{
	unsigned char	c;
	unsigned int	i;

	i = 0;
	while (i < 16)
	{
		if (i >= lim)
			write(1, "  ", 2);
		else
		{
			c = addr[i];
			write(1, &base[c / 16], 1);
			write(1, &base[c % 16], 1);
		}
		if (i++ % 2)
			write(1, " ", 1);
	}
}

int	print_chars(char *addr, unsigned int lim)
{
	unsigned char	c;
	unsigned int	i;

	i = 0;
	while (i < lim)
	{
		c = addr[i];
		if (c > 31 && c < 127)
			write(1, &c, 1);
		else
			write(1, ".", 1);
		if (! (++i % 16))
			return (16);
	}	
	return (i % 16);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	char	*base;
	char	*str;

	if (!addr || !size)
		return (addr);
	base = "0123456789abcdef";
	str = (char *)addr;
	i = 0;
	while (i < size)
	{
		print_address(base, (long)&str[i], 0);
		write(1, ": ", 2);
		print_hex_chars(base, &str[i], size - i);
		i += print_chars(&str[i], size - i);
		write(1, "\n", 1);
	}
	return (addr);
}
