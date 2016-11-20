/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buf_concat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 21:19:33 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/13 21:24:02 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>

char		*buf_concat(char *old, char *buf, int readed)
{
	char	*new_ptr;
	int		old_size;

	old_size = 0;
	new_ptr = NULL;
	old_size = ft_strlen(old);
	new_ptr = malloc(sizeof(char) * (old_size + readed + 1));
	ft_strcat(new_ptr, old);
	ft_strcat(new_ptr, buf);
	return (new_ptr);
}
