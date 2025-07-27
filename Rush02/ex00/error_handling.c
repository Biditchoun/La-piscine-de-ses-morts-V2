/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 15:50:13 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/27 21:18:02 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	int_malloc_error(char *str, int i)
{
	free (str);
	return (i);
}

char	*str_malloc_error(char *str)
{
	free (str);
	return (NULL);
}

int	handle_error(t_param *dict, char *buff, char *str)
{
	int	i;

	i = ft_strlen(str);
	write(2, str, i);
	if (buff)
		free(buff);
	if (dict)
		free(dict);
	return (-1);
}
