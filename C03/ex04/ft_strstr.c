/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:32:13 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/14 23:07:44 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	i2;
	int	j;

	if (!to_find[0])
		return (str);
	i = -1;
	while (str[++i])
	{
		i2 = i;
		j = 0;
		while (str[i2++] == to_find[j++])
			if (!to_find[j])
				return (&str[i]);
	}
	return (0);
}
