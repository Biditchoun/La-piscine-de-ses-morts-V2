/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:02:41 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/29 19:04:05 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	check_intro(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	j = i - 1;
	while (str[++j] && str[j] != '\n')
		if (str[j] < 32 || str[j] > 126)
			return (1);
	if (!str[j] || j - i != 3)
		return (1);
	while (str[i] != '\n')
	{
		j = i;
		while (str[++j] != '\n')
			if (str[j] == str[i])
				return (1);
		i++;
	}
	return (0);
}

int	check_map(char *str, int h, int l)
{
	int	i;
	int	j;
	int	lines;

	i = 4;
	lines = 0;
	while (str[i])
	{
		j = -1;
		while (str[i + ++j] && str[i + j] != '\n')
			if (str[i + j] != str[0] && str[i + j] != str[1])
				return (1);
		if (j != l)
			return (1);
		lines++;
		i += j;
		if (!str[i])
			return (1);
		i++;
	}
	return (lines - h);
}

int	check_input(char *str)
{
	int	i;
	int	h;
	int	l;

	if (str[0] < '0' || str[0] > '9')
		return (1);
	if (check_intro(str))
		return (1);
	i = 0;
	while (str[i] != '\n')
		i++;
	i++;
	l = i;
	while (str[l] && str[l] != '\n')
		l++;
	if (l == i)
		return (1);
	l -= i;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	h = ft_atoi(str);
	if (check_map(&str[i], h, l))
		return (1);
	return (0);
}
