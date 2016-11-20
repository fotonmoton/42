/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 10:20:14 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/04 11:40:44 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_active_bits(int value)
{
	unsigned int	bits;

	bits = 0;
	if (value < 0)
		bits++;
	value = value & 0x7FFFFFFF;
	while (value)
	{
		bits += value & 1;
		value = value >> 1;
	}
	return (bits);
}
