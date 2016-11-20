/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 19:21:39 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/04 02:01:32 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_take_place(int hour)
{
	char *a;

	a = "THE FOLLOWING TAKES PLACE BETWEEN ";
	if (hour == 0)
		printf("%s12.00 A.M. AND 1.00 A.M\n", a);
	else if (hour == 23)
		printf("%s11.00 P.M. AND 12.00 A.M\n", a);
	else if (hour == 11)
		printf("%s11.00 A.M. AND 12.00 P.M\n", a);
	else if (hour == 12)
		printf("%s12.00 P.M. AND 1.00 P.M\n", a);
	else if (hour > 12)
		printf("%s%d.00 P.M. AND %d.00 P.M\n", a, hour - 12, hour - 12 + 1);
	else
		printf("%s%d.00 A.M. AND %d.00 A.M\n", a, hour, hour + 1);
}
