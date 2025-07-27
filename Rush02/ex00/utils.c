/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atran-ng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 16:10:28 by atran-ng          #+#    #+#             */
/*   Updated: 2025/07/27 22:38:18 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

int	is_printable(char c)
{
	if ((c < 32) || (c > 126))
		return (0);
	return (1);
}

int	is_digit(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

int	ft_strcpy(char *str, char *src)
{
	int	i;

	if (!src)
		return (0);
	i = 0;
	while (src[i])
	{
		str[i] = src [i];
		i++;
	}
	str[i] = '\0';
	return (i);
}

int	cmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (-1000);
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
