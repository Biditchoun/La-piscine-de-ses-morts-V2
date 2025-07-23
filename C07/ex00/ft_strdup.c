/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 21:31:41 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/22 20:22:14 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*rt;
	int		i;

	rt = malloc (sizeof (src) + 1);
	if (!rt)
		return (NULL);
	i = -1;
	while (src[++i])
		rt[i] = src[i];
	rt[i] = 0;
	return (rt);
}
