/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 15:45:26 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/27 21:57:07 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	check_number(char *str)
{
	int	i;

	if (!str[0])
		return (1);
	i = -1;
	while (str[++i])
		if (str[i] < '0' || str[i] > '9')
			return (1);
	return (0);
}

int	main(int ac, char **av)
{
	t_param	*dict;
	char	*str;
	int		i;

	if (ac < 2 || ac > 3)
		return (handle_error(NULL, NULL, "Arguments error\n"));
	if (check_number(av[ac - 1]))
		return (handle_error(NULL, NULL, "Error\n"));
	str = dict_to_str(ac, av);
	if (!str)
		return (handle_error(NULL, NULL, "Open / Read / Malloc error\n"));
	if (check_dict(str))
		return (handle_error(NULL, str, "Dict error\n"));
	dict = convert_to_structs(str);
	if (!dict)
		return (handle_error(NULL, str, "Malloc error\n"));
	if (check_keys(dict))
		return (handle_error(dict, str, "Dict error\n"));
	i = print_number(dict, av[ac - 1]);
	if (i == -1)
		return (handle_error(dict, str, "Malloc error\n"));
	if (!i)
		return (handle_error(dict, str, "Dict error\n"));
	free(str);
	free(dict);
}
