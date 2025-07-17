/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:59:21 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/16 17:13:37 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	rt;

	if (nb < 0)
		return (0);
	if (!nb)
		return (1);
	rt = nb;
	while (--nb)
		rt *= nb;
	return (rt);
}
