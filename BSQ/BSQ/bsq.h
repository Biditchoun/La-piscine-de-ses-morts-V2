/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:08:34 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/29 18:59:00 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_add
{
	int	x;
	int	y;
	int	size;
}	t_square;

char		*file_into_str(int ac, char **av, int i);
int			check_input(char *str);
char		**str_into_map(char *str);
t_square	find_biggest_square(char **map, char *str);
void		update_map(t_square square, char **map, char *str);
void		print_map(char **map);

int			ft_strlen(char *str);
int			ft_strcpy(char *dest, char *src);
int			ft_atoi(char *str);
int			is_in_string(char *str, char c);

#endif
