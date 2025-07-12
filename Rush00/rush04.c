/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:40:22 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/12 14:52:42 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_line(int l, char c1, char c2, char c3)
{
	int	i;

	write(1, &c1, 1);
	i = 1;
	while (l - ++i > 0)
		write(1, &c2, 1);
	if (l > 1)
		write(1, &c3, 1);
	write(1, "\n", 1);
}

void	rush(int x, int y)
{
	int	i;

	if (x < 1 || y < 1)
		return ;
	print_line(x, 'A', 'B', 'C');
	i = 1;
	while (y - ++i > 0)
		print_line(x, 'B', ' ', 'B');
	if (y > 1)
		print_line(x, 'C', 'B', 'A');
}
