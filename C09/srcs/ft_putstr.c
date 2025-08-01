/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 13:50:28 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/29 21:31:26 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_putstr(char *str)
{
	int	i;

	if (! str)
		return ;
	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}
