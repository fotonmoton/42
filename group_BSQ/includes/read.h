/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykolomie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 18:09:31 by ykolomie          #+#    #+#             */
/*   Updated: 2016/11/16 19:22:47 by ykolomie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_H
# define READ_H

char	*expand_buf(char *buf, unsigned int *size);
char	*read_file(int fd);
int		ft_atoi(char *str);
char	**ft_split_linebreak(char *buf);

#endif
