/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 20:54:48 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/12 17:15:07 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
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
