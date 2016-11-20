/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 04:05:30 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/04 17:14:18 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int tempa;
	int tempb;
	int	tempc;
	int	tempd;

	tempa = ***a;
	tempb = *b;
	tempc = *******c;
	tempd = ****d;
	*******c = tempa;
	****d = tempc;
	*b = tempd;
	***a = tempb;
}
