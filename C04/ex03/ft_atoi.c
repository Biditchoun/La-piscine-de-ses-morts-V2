/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:42:52 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/16 15:13:12 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_white_space(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r'
		|| c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	rt;

	if (!str)
		return (0);
	i = 0;
	while (check_white_space(str[i]))
		i++;
	neg = 1;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			neg *= -1;
	rt = 0;
	while (str[i] >= '0' && str[i] <= '9')
		rt = 10 * rt + str[i++] - '0';
	return (rt * neg);
}
