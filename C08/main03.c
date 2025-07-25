/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 21:19:44 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/24 21:29:22 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex03/ft_point.h"
#include <stdio.h>

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int	main(void)
{
	t_point	point;

	set_point(&point);
	printf("%i %i\n", point.x, point.y);
	return (0);
}
