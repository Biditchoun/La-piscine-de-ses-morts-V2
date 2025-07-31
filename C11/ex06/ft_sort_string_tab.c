/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 13:50:45 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/31 15:20:20 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	if (s1 == s2)
		return (0);
	i = -1;
	while (s1[++i] || s2[i])
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}

void	swap(char **tab, int i, int j)
{
	char	*buff;

	buff = tab[i];
	tab[i] = tab[j];
	tab[j] = buff;
}

void	ft_sort_string_tab(char **tab)
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
			if (ft_strcmp(tab[i], tab[j]) > 0)
				swap(tab, i, j);
	}
}
