/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 12:29:16 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/01 20:11:55 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char *counter;

	counter = str;
	while (*counter)
	{
		if (*counter >= 'A' && *counter <= 'Z')
		{
			*counter += 32;
		}
		counter++;
	}
	*counter = '\0';
	return (str);
}
