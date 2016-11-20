/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 21:16:44 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/13 21:44:19 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# define BUF_S 8192

typedef char	(*t_rush)(int *, int, int);

char			*buf_concat(char *old, char *buf, int readed);
char			*input_read(void);
int				*det_dimensions(char *str);
char			*rush_creator(int *dim, t_rush ch);
int				*find_rush(char *str, int *dim);
void			print_result(int *dim, int *checked);
char			ch_rush00(int *dim, int x, int y);
char			ch_rush01(int *dim, int x, int y);
char			ch_rush02(int *dim, int x, int y);
char			ch_rush03(int *dim, int x, int y);
char			ch_rush04(int *dim, int x, int y);

#endif
