/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 15:43:47 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/27 22:39:55 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	print_word(t_param *dict, char *str, int last)
{
	int	i;
	int	j;

	j = 0;
	while (str[j] == '0')
		j++;
	if (!str[j])
		j--;
	i = -1;
	while (dict[++i].nb)
		if (!cmp(dict[i].nb, &str[j]))
			break ;
	write(1, dict[i].text, ft_strlen(dict[i].text));
	if (last)
		write(1, " ", 1);
	else
		write(1, "\n", 1);
	return (1);
}

int	print_nb_in_dict(t_param *dict, char *nb, char *nbc, char *nbc2)
{
	int	i;
	int	j;
	int	k;

	if (check_nb_length(dict, nbc))
		return (-2);
	i = count_zeroes(nbc);
	j = count_zeroes(nbc2);
	k = count_zeroes(nb);
	if (nbc[i] == '1' && (i % 3 == 0 || (i % 3 == 2 && !cmp(&nb[k], &nbc[i])))
		&& !cmp(&nbc2[j], &nbc[i]))
		print_word(dict, "1", 1);
	i = ft_strlen(nbc2) - 1;
	while (i)
	{
		if (key_in_dict(dict, nbc2) && (i % 3 != 1 || nbc[i] != '1'))
		{
			print_word(dict, nbc2, ft_strlen(nbc2) - i - 1);
			while (i > -1)
				nbc[i--] = '0';
			return (0);
		}
		nbc2[i--] = '0';
	}
	return (1);
}

int	print_next_word(t_param *dict, char *nb, char *nbc)
{
	char	*nbc2;
	int		i;

	(void)nb;
	i = 0;
	while (nbc[i] == '0')
		i++;
	if (!nbc[i])
		return (i);
	nbc2 = malloc(sizeof (char) * (ft_strlen(nbc) + 1));
	if (!nbc2)
		return (-1);
	ft_strcpy(nbc2, nbc);
	if (++i)
		i = print_nb_in_dict(dict, nb, nbc, nbc2);
	if (i > 0)
		print_small_block(dict, nbc);
	free(nbc2);
	return (i);
}

int	check_filled_with_0(char *nb)
{
	int	i;

	i = 0;
	while (nb[i] == '0')
		i++;
	if (nb[i])
		return (0);
	return (1);
}

int	print_number(t_param *dict, char *nb)
{
	char	*nbc;
	int		i;
	int		j;

	if (check_filled_with_0(nb))
		return (print_word(dict, "0", 0));
	i = ft_strlen(nb);
	nbc = malloc(sizeof (char) * (i + 3 - i % 3 + 1));
	if (!nbc)
		return (0);
	j = 0;
	while ((i + j) % 3 < 2)
		nbc[j++] = '0';
	nbc[j] = '0';
	ft_strcpy(&nbc[3 - i % 3], nb);
	j = 0;
	while (j != i + 3 - i % 3)
	{
		j = print_next_word(dict, nb, nbc);
		if (j == -1)
			return (int_malloc_error(nbc, -1));
		if (j == -2)
			return (int_malloc_error(nbc, 0));
	}
	return (int_malloc_error(nbc, 1));
}
