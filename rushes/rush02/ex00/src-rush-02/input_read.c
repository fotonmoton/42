/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 13:45:26 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/14 14:10:29 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "rush02.h"

char		*input_read(void)
{
	char	*input;
	char	buf[BUF_S + 1];
	int		readed;

	input = malloc(sizeof(char) * (BUF_S + 1));
	while ((readed = read(0, buf, BUF_S)))
	{
		buf[readed] = '\0';
		input = buf_concat(input, buf, readed);
	}
	return (input);
}
