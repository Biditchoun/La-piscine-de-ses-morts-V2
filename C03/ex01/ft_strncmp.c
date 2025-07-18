/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:44:00 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/14 21:31:31 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (s1 == s2)
		return (0);
	i = -1;
	while ((s1[++i] || s2[i]) && i < n)
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}
