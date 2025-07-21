/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:44:18 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/18 12:47:52 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	argc = 0;
	while (argv[++argc])
	{
		i = 0;
		while (argv[argc][i])
			i++;
		write (1, argv[argc], i);
		write (1, "\n", 1);
	}
}
