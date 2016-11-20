/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 11:30:14 by gtertysh          #+#    #+#             */
/*   Updated: 2016/10/28 21:01:27 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		count;
	int		char_numb;
	char	*temp_ptr;
	char	temp;

	count = 0;
	char_numb = 0;
	temp_ptr = str;
	while (*temp_ptr != '\0')
	{
		char_numb++;
		temp_ptr++;
	}
	while (char_numb > count)
	{
		temp = *(str + char_numb - 1);
		*(str + char_numb - 1) = *(str + count);
		*(str + count) = temp;
		count++;
		char_numb--;
	}
	return (str);
}
