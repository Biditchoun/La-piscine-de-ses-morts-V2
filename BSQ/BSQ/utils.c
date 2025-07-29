/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:43:20 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/29 20:15:01 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (-1);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcpy(char *dest, char *src)
{
	int	i;

	if (!dest)
		return (-1);
	if (!src)
		return (0);
	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = 0;
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	rt;

	if (!str)
		return (0);
	i = 0;
	neg = 1;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			neg *= -1;
	rt = 0;
	while (str[i] >= '0' && str[i] <= '9')
		rt = 10 * rt + str[i++] - '0';
	return (rt * neg);
}

int	is_in_string(char *str, char c)
{
	int	i;

	if (!str)
		return (-1);
	i = -1;
	while (str[++i])
		if (str[i] == c)
			return (1);
	return (0);
}
