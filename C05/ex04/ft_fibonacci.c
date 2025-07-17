/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:28:58 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/16 19:35:38 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	fibonacci(int index, int n1, int n2)
{
	if (!index)
		return (n1);
	return (fibonacci(index - 1, n2, n1 + n2));
}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	return (fibonacci(index, 0, 1));
}
