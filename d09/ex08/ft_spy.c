/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 01:58:29 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/04 04:01:16 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	low(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
		}
		str++;
	}
}

int		is_alert(char *str, char *find)
{
	while (*str == ' ' || *str == '\t')
		str++;
	while (*str && *find && *str == *find)
	{
		str++;
		find++;
	}
	if (*find == '\0' && (*str == '\0' || *str < 33))
	{
		return (1);
	}
	else
		return (0);
}

void	ft_spy(int argc, char **argv)
{
	int		i;
	int		j;
	char	*a;
	char	*b;
	char	*c;

	a = "president";
	b = "attack";
	c = "powers";
	i = 1;
	j = 0;
	while (i < argc)
	{
		low(argv[i]);
		if (is_alert(argv[i], a) ||
			is_alert(argv[i], b) ||
			is_alert(argv[i], c))
			ft_putstr("Alert!!!\n");
		i++;
	}
}

int		main(int argc, char **argv)
{
	ft_spy(argc, argv);
	return (0);
}
