/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:56:52 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/24 16:56:12 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*size_is_0(void)
{
	char	*rt;

	rt = malloc(1);
	if (!rt)
		return (NULL);
	rt[0] = 0;
	return (rt);
}

void	join_write(char **strs, char *rt, char *sep, int size)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	k = -1;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
			rt[++k] = strs[i][j];
		j = -1;
		if (i + 1 < size)
			while (sep[++j])
				rt[++k] = sep[j];
	}
	rt[++k] = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*rt;
	int		i;
	int		j;
	int		k;

	if (size < 0 || !sep || !strs)
		return (NULL);
	if (!size)
		return (size_is_0());
	k = 0;
	i = -1;
	while (++i < size)
		if (strs[i])
			k += str_len(strs[i]);
	j = str_len(sep);
	rt = malloc(k + j * (size - 1) + 1);
	if (!rt)
		return (NULL);
	join_write(strs, rt, sep, size);
	return (rt);
}
