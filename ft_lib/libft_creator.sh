# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/02 12:08:36 by gtertysh          #+#    #+#              #
#    Updated: 2016/11/12 15:04:26 by gtertysh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ROOT=~/42/ft_lib
SRC=~/42/ft_lib/src
OBJ=~/42/ft_lib/obj
LIB=~/42/ft_lib/lib

cd $OBJ

for f in "$SRC"/*.c
do
	gcc -c "${f}"
done

cd $LIB

for f in "$OBJ"/*.o
do
	ar r libft.a "${f}"
done

for f in "$OBJ"/*.o
do
	rm "${f}"
done
