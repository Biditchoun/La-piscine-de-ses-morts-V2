/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 13:53:55 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/10 15:17:24 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	buf;

	if (!tab)
		return ;
	i = -1;
	while (++i < --size)
	{
		buf = tab[i];
		tab[i] = tab[size];
		tab[size] = buf;
	}
}
