/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 13:46:20 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/01 16:18:12 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	to_lowercase(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'B')
		{
			*str += 32;
		}
		str++;
	}
}

char	*ft_strcapitalize(char *str)
{
	char *begin;

	begin = str;
	to_lowercase(str);
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			if (*(str - 1) >= 'z')
				*str -= 32;
			if (*(str - 1) <= 'A')
				*str -= 32;
			if (*(str - 1) >= '0' && *(str - 1) <= '9')
				*str += 32;
		}
		str++;
	}
	*str = '\0';
	return (begin);
}
