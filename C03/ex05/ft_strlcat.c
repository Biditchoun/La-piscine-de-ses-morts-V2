/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 18:00:26 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/14 19:40:33 by sawijnbe         ###   ########.fr       */
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
	int				i;
	int				j;

	i = str_len(dest);
	j = str_len(src);
	if (i > (int) size - 1)
		return (j + size);
	rt = i + str_len(src);
	j = -1;
	while (src[++j] && j < (int)size)
		dest[i++] = src[j];
	dest[i] = 0;
	return (rt);
}
