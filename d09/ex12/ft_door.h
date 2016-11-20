/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 05:14:16 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/04 06:16:58 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# define EXIT_SUCCESS 0
# define OPEN 1
# define CLOSE 0
# define TRUE 1
# define FALSE 0

typedef	int		t_bool;

typedef struct	s_door
{
	int state;
}				t_door;

void			ft_putstr(char *str);
t_bool			close_door(t_door *door);
t_bool			is_door_open(t_door *door);
t_bool			is_door_close(t_door *door);
t_bool			open_door(t_door *door);

#endif
