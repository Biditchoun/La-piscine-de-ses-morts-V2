/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 18:28:43 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/31 15:18:59 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	rt;
	int	i;

	if (!tab || !f)
		return (0);
	rt = 0;
	i = -1;
	while (++i < length)
		if (f(tab[i]))
			rt++;
	return (rt);
}
