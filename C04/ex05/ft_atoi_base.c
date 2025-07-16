/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:20:02 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/16 16:26:26 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_whitespace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r'
		|| c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	checkbase(char *base)
{
	int	i;
	int	j;

	if (!base)
		return (0);
	i = -1;
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-' || check_whitespace(base[i]))
			return (0);
		j = i;
		while (base[++j])
			if (base[i] == base[j])
				return (0);
	}
	if (i < 2)
		return (0);
	return (i);
}

int	in_base(char *base, char c)
{
	int	i;

	i = -1;
	while (base[++i])
		if (base[i] == c)
			return (1);
	return (0);
}

int	convert_to_nb(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i] != c)
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	len;
	int	neg;
	int	rt;

	len = checkbase(base);
	if (!str || !len)
		return (0);
	i = 0;
	while (check_whitespace(str[i]))
		i++;
	neg = 1;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			neg *= -1;
	rt = 0;
	while (in_base(base, str[i]))
		rt = rt * len + convert_to_nb(base, str[i++]);
	return (rt * neg);
}
