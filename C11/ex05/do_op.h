/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 12:41:24 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/31 15:21:01 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>
# include <limits.h>

int	ft_atoi(char *str);
int	ft_putnbr(int nb, int rt);

int	addition(int a, int b);
int	substraction(int a, int b);
int	division(int a, int b);
int	multiplication(int a, int b);
int	modulo(int a, int b);

#endif
