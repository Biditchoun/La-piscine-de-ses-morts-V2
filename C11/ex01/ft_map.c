/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 15:26:43 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/30 15:41:52 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*rt;
	int	i;

	if (length < 0 || !f || !tab)
		return (NULL);
	rt = malloc(sizeof(int) * length);
	if (!rt)
		return (NULL);
	i = -1;
	while (++i < length)
		rt[i] = f(tab[i]);
	return (rt);
}
