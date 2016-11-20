/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 20:38:00 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/04 02:41:29 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*new_str;
	char	*begin;

	begin = src;
	size = 0;
	while (*src != '\0')
	{
		src++;
		size++;
	}
	new_str = (char*)malloc(sizeof(*new_str) * (size + 1));
	i = 0;
	while (i <= size)
	{
		new_str[i] = begin[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
