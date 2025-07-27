/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 20:01:57 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/27 22:41:30 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	case0(t_param *dict, char *nb, char *str, int i)
{
	if (nb[i] != '1')
	{
		str[0] = nb[i];
		str[1] = 0;
		print_word(dict, str, 1);
		nb[i] = '1';
		return ;
	}
	print_word(dict, "100", 1);
	nb[i] = '0';
	if (nb[i + 1] == '0' && nb[i + 2] == '0')
		nb[i + 2] = '1';
	return ;
}

void	case1(t_param *dict, char *nb, char *str, int i)
{
	str[0] = nb[i];
	str[1] = '0';
	if (nb[i] == '1')
		str[1] = nb[i + 1];
	str[2] = 0;
	print_word(dict, str, 1);
	if (nb[i] == '1' || nb[i + 1] == '0')
		nb[i + 1] = '1';
	nb[i] = '0';
}

void	print_small_block(t_param *dict, char *nb)
{
	char	str[4];
	int		i;

	i = 0;
	while (nb[i] == '0')
		i++;
	if (i % 3 == 0)
		case0(dict, nb, str, i);
	else if (i % 3 == 1)
		case1(dict, nb, str, i);
	else
	{
		str[0] = nb[i];
		str[1] = 0;
		print_word(dict, str, 1);
		nb[i] = '1';
	}
}

int	check_nb_length(t_param *dict, char *nb)
{
	char	*str;
	int		i;
	int		l;
	int		l2;

	i = 0;
	while (nb[i] == '0')
		i++;
	l = ft_strlen(&nb[i]);
	str = malloc(l - 2 + i % 3 + 1);
	if (!str)
		return (-1);
	l2 = 0;
	str[l2] = '1';
	while (++l2 < l - 2 + i % 3)
		str[l2] = '0';
	str[l2] = 0;
	i = -1;
	while (dict[++i].nb)
		if (!cmp(dict[i].nb, str))
			return (int_malloc_error(str, 0));
	return (1);
}
