# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/02 12:08:36 by gtertysh          #+#    #+#              #
#    Updated: 2016/11/02 19:05:47 by gtertysh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c ./*.c
ar cr libft.a ./*.o
rm ./*.o
