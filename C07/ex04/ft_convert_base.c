/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:11:28 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/23 19:20:16 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	checkbase(char *base);

int	strlength(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_rt_length(int nb, int d)
{
	int	rt;

	rt = 0;
	if (nb < 0)
		rt++;
	while (nb && ++rt)
		nb /= d;
	return (rt);
}

int	write_nb_base(char *rt, int nb, char *base, int d)
{
	unsigned int	n;
	int		i;

	if (nb < 0)
		n = -nb;
	else
		n = nb;
	i = 0;
	if (n / d)
		i = write_nb_base(rt, nb / d, base, d);
	rt[i] = base[n % d];
	return (i + 1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*rt;
	int		nb;
	int		d;
	int		l;

	if (!nbr || !base_from || !base_to
		|| !checkbase(base_from) || !checkbase(base_to))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	d = strlength(base_to);
	l = get_rt_length(nb, d);
	rt = malloc(l + 1);
	if (!rt)
		return (NULL);
	if (nb < 0)
		rt[0] = '-';
	if (nb < 0)
		write_nb_base(&rt[1], nb, base_to, d);
	else
		write_nb_base(rt, nb, base_to, d);
	rt[l] = 0;
	return (rt);
}
