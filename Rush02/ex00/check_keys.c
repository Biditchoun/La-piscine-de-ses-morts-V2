/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_keys.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atran-ng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 16:41:23 by atran-ng          #+#    #+#             */
/*   Updated: 2025/07/27 22:39:24 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	dict_length(char *str)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == '\n')
			str[i++] = ' ';
		while (str[i] && str[i] != '\n')
			i++;
		if (str[i])
			count++;
		if (str[i])
			i++;
	}
	return (count);
}

int	key_in_dict(t_param *dict, char *str)
{
	int	i;
	int	j;

	j = 0;
	while (str[j] == '0')
		j++;
	i = -1;
	while (dict[++i].nb)
		if (!cmp(&str[j], dict[i].nb))
			return (1);
	return (0);
}

int	check_big_keys(t_param *dict)
{
	int	i;

	i = 0;
	if (key_in_dict(dict, "100"))
		if (key_in_dict(dict, "1000"))
			if (key_in_dict(dict, "1000000"))
				if (key_in_dict(dict, "1000000000"))
					if (key_in_dict(dict, "1000000000000"))
						if (key_in_dict(dict, "1000000000000000"))
							if (key_in_dict(dict, "1000000000000000000"))
								i++;
	if (i && key_in_dict(dict, "1000000000000000000000"))
		if (key_in_dict(dict, "1000000000000000000000000"))
			if (key_in_dict(dict, "1000000000000000000000000000"))
				if (key_in_dict(dict, "1000000000000000000000000000000"))
					i++;
	if (i == 2 && key_in_dict(dict, "1000000000000000000000000000000000"))
		if (key_in_dict(dict, "1000000000000000000000000000000000000"))
			return (1);
	return (0);
}

int	check_duplicates(t_param *dict)
{
	int	i;
	int	j;

	i = -1;
	while (dict[++i].nb)
	{
		j = i;
		while (dict[++j].nb)
			if (!cmp(dict[i].nb, dict[j].nb))
				return (1);
	}
	return (0);
}

int	check_keys(t_param *dict)
{
	char	str[40];

	str[0] = '0';
	str[1] = 0;
	while (str[0]++ < '9')
		if (!key_in_dict(dict, str))
			return (1);
	str[0] = '1';
	str[1] = '0';
	str[2] = 0;
	while (str[1]++ < '9')
		if (!key_in_dict(dict, str))
			return (1);
	str[0] = '2';
	str[1] = '0';
	while (str[0]++ < '9')
		if (!key_in_dict(dict, str))
			return (1);
	if (!check_big_keys(dict))
		return (1);
	if (check_duplicates(dict))
		return (1);
	return (0);
}
