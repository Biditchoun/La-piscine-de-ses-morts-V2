/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 18:00:26 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/15 13:32:33 by sawijnbe         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	rt;
	unsigned int	i;
	unsigned int	j;

	if (str_len(dest) >= size)
		return (str_len(src) + size);
	rt = str_len(dest) + str_len(src);
	i = str_len(dest);
	j = -1;
	while (src[++j] && i < size - 1)
		dest[i++] = src[j];
	dest[i] = 0;
	return (rt);
}
