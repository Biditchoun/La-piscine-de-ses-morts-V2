/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 21:31:08 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/13 18:08:35 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	str_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	str_n_cpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (dest < src && dest)
	{
		i = -1;
		while (src[++i] && i < n)
			dest[i] = src[i];
		if (i >= n)
			i = n - 1;
		dest[i] = 0;
		return ;
	}
	while (src[i])
		i++;
	if (i >= n)
		i = n - 1;
	dest[i] = 0;
	while (--i + 1)
		dest[i] = src[i];
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (!size)
		return (str_len(src));
	i = str_len(src);
	str_n_cpy(dest, src, size);
	if (dest == src)
		return (size - 1);
	return (i);
}
