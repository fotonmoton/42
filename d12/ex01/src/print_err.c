/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_err.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 21:35:48 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/10 21:43:55 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <errno.h>

int	print_err(char *argvstr)
{
	if (errno == 2)
	{
		ft_putstr("cat: ");
		ft_putstr(argvstr);
		ft_putstr(": No such file or directory\n");
	}
	else if (errno == 13)
	{
		ft_putstr("cat: ");
		ft_putstr(argvstr);
		ft_putstr(": Permission denied\n");
	}
	else if (errno == 21)
	{
		ft_putstr("cat: ");
		ft_putstr(argvstr);
		ft_putstr(": Is a directory\n");
		return (1);
	}
	return (0);
}
