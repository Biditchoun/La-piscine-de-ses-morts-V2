/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vthiltge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:17:45 by vthiltge          #+#    #+#             */
/*   Updated: 2025/07/19 20:02:36 by vthiltge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_div(int nb)
{
    if (nb % 4)
        return (0);
    return (nb / 4);
}

int     check_input(char *str)
{
    int     i = 0;
    int     j = 0;
    int     rt;

    while (str[i])
    {
        if (str[i] == ' ')
        {
            i++;
            continue;
        }
        if (str[i] < '1' || str[i] > '9')
            return (0);
        if (str[i + 1] && str[i + 1] >= '0' && str[i + 1] <= '9')
            return (0);
        j++;
        i++;
    }
    while ( str[i] == '\0' && str[i - 1] == ' ')
    {
	    str[i - 1] == '\0';
		i--;
    }
    rt = ft_div(j);
    if (!rt)
        return (0);

    i = 0;
    while (str[i])
    {
        if (str[i] >= '1' && str[i] <= '9' && str[i] - '0' > rt)
            return (0);
        i++;
    }

    return (rt);
}

/*
#include<stdio.h>
int main(void)
{
	printf("%i",ft_value("2 2 3 4 2 2 3 4 4 2 1 4 3 1 4 2 1"));
}*/
