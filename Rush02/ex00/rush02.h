/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 15:41:55 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/07/27 22:38:40 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct t_struct
{
	char	*nb;
	char	*text;
	int		size;
}	t_param;

char			*dict_to_str(int ac, char **av);
int				check_dict(char *dict);
struct t_struct	*convert_to_structs(char *str);
int				dict_length(char *str);
int				check_keys(t_param *dic);
int				check_nb_length(t_param *dict, char *nb);
int				print_number(t_param *dict, char *nb);
int				key_in_dict(t_param *dict, char *str);
void			print_small_block(t_param *dict, char *nb);

int				handle_error(t_param *dic, char *buff, char *str);
char			*str_malloc_error(char *str);
int				int_malloc_error(char *str, int i);
int				count_zeroes(char *str);
int				print_word(t_param *dict, char *str, int last);
int				ft_strlen(char *str);
int				is_printable(char c);
int				is_digit(char c);
int				ft_strcpy(char *str, char *src);
int				cmp(char *s1, char *s2);

#endif
