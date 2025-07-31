/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 13:50:45 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/31 15:20:35 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	soowap(char **tab, int i, int j)
{
	char	*buff;

	buff = tab[j];
	j++;
	while (--j > i)
		tab[j] = tab[j - 1];
	tab[i] = buff;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;
	int	j;

	if (!tab)
		return ;
	i = -1;
	while (tab[++i])
	{
		j = i;
		while (tab[++j])
			if (cmp(tab[i], tab[j]) > 0)
				soowap(tab, i, j);
	}
}
