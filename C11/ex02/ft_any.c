/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 15:57:55 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/31 15:18:51 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	if (!tab || !f)
		return (0);
	i = -1;
	while (tab[++i])
		if (f(tab[i]))
			return (1);
	return (0);
}
