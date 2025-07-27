/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_dict.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 16:19:03 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/27 12:21:10 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*store_into_str(int fd)
{
	char	*rt;
	char	*rtt;
	char	buff[1001];
	int		read_rt;
	int		i;

	rt = NULL;
	rtt = NULL;
	read_rt = 1000;
	while (read_rt == 1000)
	{
		read_rt = read(fd, buff, 1000);
		if (read_rt == -1)
			return (str_malloc_error(rt));
		buff[read_rt] = 0;
		i = ft_strlen(rt) + read_rt + 1;
		rtt = malloc(sizeof(char) * i);
		if (!rtt)
			return (str_malloc_error(rt));
		i = ft_strcpy(rtt, rt);
		ft_strcpy(&rtt[i], buff);
		free(rt);
		rt = rtt;
	}
	return (rt);
}

char	*dict_to_str(int ac, char **av)
{
	char	*dict_name;
	char	*rt;
	int		fd;

	if (ac == 3)
		dict_name = av[1];
	else
		dict_name = "numbers.dict";
	fd = open(dict_name, O_RDONLY);
	if (fd == -1)
		return (NULL);
	rt = store_into_str(fd);
	close(fd);
	if (!rt)
		return (NULL);
	return (rt);
}

int	write_into_struct(char *str, t_param *rt, int i, int j)
{
	int		k;

	while (str[j] == '0')
		j++;
	if (!is_digit(str[j]))
		j--;
	rt[i].nb = &str[j];
	k = j;
	while (str[j] && is_digit(str[j]))
		j++;
	rt[i].size = j - k;
	str[j++] = 0;
	while (str[j] && (str[j] == ' ' || str[j] == ':'))
		j++;
	rt[i].text = &str[j];
	while (str[j] && str[j] != '\n')
		j++;
	k = j - 1;
	while (str[k] == ' ')
		k--;
	if (str[j])
		j++;
	str[k + 1] = 0;
	return (j);
}

struct t_struct	*convert_to_structs(char *str)
{
	t_param	*rt;
	int		i;
	int		j;

	i = dict_length(str);
	rt = malloc(sizeof (t_param) * (i + 1));
	if (!rt)
		return (NULL);
	i = 0;
	j = 0;
	while (str[j])
		j = write_into_struct(str, rt, i++, j);
	rt[i].nb = NULL;
	rt[i].text = NULL;
	return (rt);
}
