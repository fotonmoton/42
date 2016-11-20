/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 10:27:11 by gtertysh          #+#    #+#             */
/*   Updated: 2016/10/31 16:43:18 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		numb;
	int		is_negative;

	numb = 0;
	while (*str < 33)
		str++;
	if (*str == '-')
	{
		is_negative = 1;
		str++;
	}
	if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9' && *str != '\0')
	{
		numb = numb * 10 + *str - '0';
		str++;
	}
	if (is_negative)
		return (-numb);
	return (numb);
}
