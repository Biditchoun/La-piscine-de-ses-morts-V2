/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:49:54 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/16 20:54:23 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	prime_check(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	if (nb < 4)
		return (1);
	i = 1;
	while (i * i < nb && i * i > 0)
		if (!(nb % ++i))
			return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	if (prime_check(nb))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
