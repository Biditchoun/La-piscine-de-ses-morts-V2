/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 21:31:08 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/12 21:44:03 by sawijnbe         ###   ########.fr       */
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

char	*str_n_cpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	if (dest < src && dest)
	{
		i = -1;
		while (src[++i] && i < (int)n)
			dest[i] = src[i];
		while (i < (int)n)
			dest[i++] = 0;
		return (dest);
	}
	else if (dest == src && dest)
		return (dest);
	while (src[i])
		i++;
	if (i < (int)n)
		while (i < (int)n)
			dest[--n] = 0;
	i = (int)n;
	while (--n + 1)
		dest[n] = src[n];
	return (dest);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	if (!src)
		return (0);
	if (!dest || size < 1)
		return (str_len(src));
	str_n_cpy(dest, src, size);
	dest[size - 1] = 0;
	return (str_len(src));
}
