/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 13:59:23 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/09 14:40:55 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *tab, int i, int j)
{
	int	buf;

	buf = tab[i];
	tab[i] = tab[j];
	tab[j] = buf;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	if (!tab)
		return ;
	i = -1;
	while (++i < size)
	{
		j = i;
		while (++j < size)
			if (tab[i] > tab[j])
				swap(tab, i, j);
	}
}
