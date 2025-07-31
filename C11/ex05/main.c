/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 12:41:08 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/31 15:21:28 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	error(char op)
{
	if (op == '/')
		write (1, "Stop : division by zero\n", 24);
	else
		write (1, "Stop : modulo by zero\n", 22);
	return (0);
}

int	do_op(int a, char op, int b, char *ops)
{
	int	(*ops_f[5])(int, int);
	int	i;

	ops_f[0] = &addition;
	ops_f[1] = &substraction;
	ops_f[2] = &division;
	ops_f[3] = &multiplication;
	ops_f[4] = &modulo;
	i = -1;
	while (++i < 5)
		if (ops[i] == op)
			return (ops_f[i](a, b));
	return (0);
}

int	main(int ac, char **av)
{
	int		a;
	int		b;
	int		result;
	char	op;

	if (ac != 4)
		return (0);
	if (av[2][1])
		return (ft_putnbr(0, 0));
	a = ft_atoi(av[1]);
	op = av[2][0];
	b = ft_atoi(av[3]);
	if (!b && (op == '/' || op == '%'))
		return (error(op));
	result = do_op(a, op, b, "+-/*%");
	ft_putnbr(result, 0);
	return (0);
}
