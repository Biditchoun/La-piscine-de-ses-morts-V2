/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 18:41:01 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/31 12:35:46 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	check;
	int	i;

	check = 0;
	i = 0;
	while (++i < length)
		if (f(tab[i - 1], tab[i]))
			check = 1;
	i = 0;
	if (!--check)
		while (++i < length)
			if (f(tab[i - 1], tab[i]) < 0)
				check = 1;
	i = 0;
	if (!--check)
		while (++i < length)
			if (f(tab[i - 1], tab[i]) > 0)
				return (0);
	return (1);
}
