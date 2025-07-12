/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:31:19 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/12 20:55:02 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_digit(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

int	check_lower(char c)
{
	if (c < 'a' || c > 'z')
		return (0);
	return (1);
}

int	check_upper(char c)
{
	if (c < 'A' || c > 'Z')
		return (0);
	return (1);
}

int	check_alphanum(char c)
{
	if (check_digit(c) || check_lower(c) || check_upper(c))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (!str)
		return (str);
	i = 0;
	while (str[i])
	{
		while (str[i] && !check_alphanum(str[i]))
			i++;
		if (str[i] && check_lower(str[i]))
			str[i] += 'A' - 'a';
		while (str[++i] && check_alphanum(str[i]))
			if (check_upper(str[i]))
				str[i] += 'a' - 'A';
	}
	return (str);
}
