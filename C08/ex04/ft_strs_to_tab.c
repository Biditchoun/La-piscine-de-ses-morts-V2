/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 21:53:26 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/28 22:20:57 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str	*ffree(t_stock_str *rt)
{
	int	i;

	i = -1;
	while (rt[++i].str)
		free(rt[i].copy);
	free((void *)rt);
	return (NULL);
}

struct s_stock_str	case_null(void)
{
	t_stock_str	rt;

	rt.str = NULL;
	rt.size = 0;
	rt.copy = NULL;
	return (rt);
}

struct s_stock_str	put_into_struct(char *str)
{
	t_stock_str	rt;
	int			i;

	if (!str)
		return (case_null());
	rt.str = str;
	i = 0;
	while (str[i])
		i++;
	rt.size = i;
	rt.copy = malloc(i + 1);
	if (!rt.copy)
		return (rt);
	i = -1;
	while (str[++i])
		rt.copy[i] = str[i];
	rt.copy[i] = 0;
	return (rt);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*rt;
	int			i;

	if (!av || ac < 1)
		return (NULL);
	rt = malloc(sizeof (t_stock_str) * (ac + 1));
	if (!rt)
		return (NULL);
	i = -1;
	while (++i < ac)
	{
		rt[i] = put_into_struct(av[i]);
		if (!rt[i].copy)
			return (ffree(rt));
	}
	rt[ac].str = NULL;
	return (rt);
}
