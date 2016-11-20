/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 17:17:51 by gtertysh          #+#    #+#             */
/*   Updated: 2016/10/27 21:46:40 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_printnbr(int nb)
{
	int		temp;
	long	div;

	temp = nb;
	div = 1;
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	while (temp)
	{
		temp = temp / 10;
		div = div * 10;
	}
	while (div > 1)
	{
		div = div / 10;
		ft_putchar(nb / div + '0');
		nb = nb % div;
	}
}
