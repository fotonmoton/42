/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:54:32 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/07 18:17:50 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int	(*f)(char *))
{
	int count;

	count = 0;
	while(*tab)
	{
		if(f(*tab))
		{
			count++;
			(*tab)++;
		}
		tab++;
	}
	return (count);
}
