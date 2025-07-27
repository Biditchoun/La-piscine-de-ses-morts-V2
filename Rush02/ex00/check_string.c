/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atran-ng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 17:00:25 by atran-ng          #+#    #+#             */
/*   Updated: 2025/07/27 22:32:34 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	check_dict1(char *str, int i)
{
	while (str[i] == ' ')
		i++;
	if (str[i] == '\n')
		return (-1);
	while (is_printable(str[i]))
		i++;
	if (str[i] != '\n')
		return (-1);
	if (str[i] == '\n')
		i++;
	return (i);
}

int	check_dict(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] == '\n')
			i++;
		if (!is_digit(str[i]))
			return (1);
		while (is_digit(str[i]))
			i++;
		while (str[i] == 32)
			i++;
		if (str[i] == ':')
			i++;
		i = check_dict1(str, i);
		if (i == -1)
			return (1);
	}
	return (0);
}

int	count_zeroes(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '0')
		i++;
	return (i);
}
