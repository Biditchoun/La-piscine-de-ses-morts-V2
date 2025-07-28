/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04_05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 12:45:24 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/28 22:23:41 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

#include <stdlib.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void			ft_show_tab(struct s_stock_str *par);

int main()
{
	t_stock_str	*oui;
	char	*strs[] = {"", "", "", NULL};
	int	size = 2;

	oui = ft_strs_to_tab(size, strs);
	ft_show_tab(oui);
	int i = -1;
	while (++i < size)
		free(oui[i].copy);
}
