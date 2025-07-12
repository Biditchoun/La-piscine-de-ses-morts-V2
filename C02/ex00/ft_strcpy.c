/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 19:36:31 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/12 16:54:22 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	if (dest < src)
	{
		i = -1;
		while (src[++i])
			dest[i] = src[i];
		dest[i] = 0;
		return (dest);
	}
	else if (dest == src && dest)
		return (dest);
	while (src[i])
		i++;
	dest[i] = 0;
	while (--i + 1)
		dest[i] = src[i];
	return (dest);
}
