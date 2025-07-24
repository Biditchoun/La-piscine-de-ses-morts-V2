/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 12:07:06 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/24 14:59:38 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *sep)
{
	int	i;

	i = -1;
	if (!sep)
		return (0);
	while (sep[++i])
		if (sep[i] == c)
			return (1);
	return (0);
}

int	count_words(char *str, char *sep)
{
	int	i;
	int	rt;

	if (!str || !str[0])
		return (0);
	if (!sep)
		return (1);
	rt = 0;
	i = 0;
	while (str[i])
	{
		while (is_sep(str[i], sep))
			i++;
		if (str[i])
			rt++;
		while (str[i] && !is_sep(str[i], sep))
			i++;
	}
	return (rt);
}

int	word_len(char *str, char *sep)
{
	int	i;

	i = -1;
	while (str[++i])
		if (is_sep(str[i], sep))
			return (i);
	return (i);
}

int	write_word(char *rt, char *str, char *sep)
{
	int	i;
	int	j;

	j = 0;
	i = -1;
	while (str[++i])
	{
		if (!is_sep(str[i], sep))
			rt[j++] = str[i];
		else
			break ;
	}
	rt[i] = 0;
	return (i);
}

//WHY ARE WE NOT ALLOWED TO USE FREE TO PROTECT THE MALLOCS

char	**ft_split(char *str, char *charset)
{
	char	**rt;
	int		l;
	int		i;
	int		j;

	l = count_words(str, charset);
	rt = malloc(sizeof (char *) * (l + 1));
	if (!rt)
		return (NULL);
	j = 0;
	i = -1;
	while (++i < l && str)
	{
		while (is_sep(str[j], charset))
			j++;
		rt[i] = malloc(word_len(&str[j], charset) + 1);
		if (!rt[i])
			return (NULL);
		j += write_word(rt[i], &str[j], charset);
	}
	rt[l] = NULL;
	return (rt);
}
