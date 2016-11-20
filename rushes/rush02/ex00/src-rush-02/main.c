/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 13:45:26 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/14 14:32:19 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int			main(void)
{
	char	*in_str;
	int		*dimensions;
	int		*checked;

	in_str = input_read();
	dimensions = det_dimensions(in_str);
	checked = find_rush(in_str, dimensions);
	print_result(dimensions, checked);
	return (0);
}
