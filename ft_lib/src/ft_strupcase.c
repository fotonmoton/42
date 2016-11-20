/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struocase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 12:11:35 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/01 12:50:51 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char *counter;

	counter = str;
	while (*counter)
	{
		if (*counter >= 'a' && *counter <= 'z')
		{
			*counter -= 32;
		}
		counter++;
	}
	*counter = '\0';
	return (str);
}
