/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 21:43:18 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/23 20:34:56 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*rt;
	int	i;

	if (min >= max)
		return (NULL);
	rt = malloc (sizeof (int) * (max - min));
	if (!rt)
		return (NULL);
	i = -1;
	while (min < max)
		rt[++i] = min++;
	return (rt);
}
