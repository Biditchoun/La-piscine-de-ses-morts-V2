/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:25:02 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/29 20:33:37 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	*free_rtnull(void *str)
{
	free(str);
	return (NULL);
}

char	*store_into_str(int fd)
{
	char	*rt;
	char	*rtt;
	char	buff[2];
	int		read_rt;
	int		i;

	rt = NULL;
	rtt = NULL;
	read_rt = 1;
	while (read_rt == 1)
	{
		read_rt = read(fd, buff, 1);
		if (read_rt == -1)
			return (free_rtnull(rt));
		buff[read_rt] = 0;
		i = ft_strlen(rt) + read_rt + 1;
		rtt = malloc(sizeof(char) * i);
		if (!rtt)
			return (free_rtnull(rt));
		i = ft_strcpy(rtt, rt);
		ft_strcpy(&rtt[i], buff);
		free(rt);
		rt = rtt;
	}
	return (rt);
}

char	*file_into_str(int ac, char **av, int i)
{
	char	*rt;
	int		fd;

	if (ac != 1)
		fd = open(av[i], O_RDONLY);
	else
		fd = 0;
	if (fd == -1)
		return (NULL);
	rt = store_into_str(fd);
	if (fd)
		close(fd);
	return (rt);
}

char	**str_into_map(char *str)
{
	char	**rt;
	int		lines;
	int		i;
	int		j;

	lines = ft_atoi(str);
	rt = malloc(sizeof(char *) * (lines + 1));
	if (!rt)
		return (NULL);
	j = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] != '\n')
			i++;
		if (str[i] && str[i + 1])
			rt[j++] = &str[i + 1];
		if (str[i] && str[i + 1])
			str[i++] = 0;
		else
			str[i] = 0;
	}
	rt[j] = NULL;
	return (rt);
}
