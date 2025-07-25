/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04_05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 12:45:24 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/25 19:48:47 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void			ft_show_tab(struct s_stock_str *par);

int main(int ac, char **av)
{
	t_stock_str	*oui;

	oui = ft_strs_to_tab(ac, av);
	ft_show_tab(oui);
}
