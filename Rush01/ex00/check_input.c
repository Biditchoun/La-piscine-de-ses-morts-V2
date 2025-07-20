/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vthiltge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:17:45 by vthiltge          #+#    #+#             */
/*   Updated: 2025/07/20 21:48:20 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_div(int nb)
{
	if (nb % 4)
		return (0);
	return (nb / 4);
}

int	check_input(char *str)
{
	int	i;
	int	rt;

	rt = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] < '1' || str[i] > '9')
			return (0);
		i++;
		if (str[i] && str[i] != ' ')
			return (0);
		rt++;
		if (str[i] && str[i + 1])
			i++;
	}
	rt = ft_div(rt);
	i = -1;
	while (str[++i])
		if (str[i] != ' ' && str[i] > rt + '0')
			return (0);
	return (rt);
}
