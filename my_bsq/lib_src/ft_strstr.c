/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 17:47:48 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/01 20:11:37 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *start;
	char *find;

	find = to_find;
	while (*str != '\0')
	{
		start = str;
		find = to_find;
		while (*str != '\0' && *find != '\0' && *str == *find)
		{
			str++;
			find++;
		}
		if (*find == '\0')
			return (start);
		str++;
	}
	return (0);
}
