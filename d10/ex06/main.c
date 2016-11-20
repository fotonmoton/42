/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 19:46:03 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/07 21:41:08 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		ft_putchar(char c);
void	ft_putstr(char *str);

typedef int (*operations)(int, int);

int		add(int a, int b)
{
	return (a + b);
}

int		sub(int a, int b)
{
	return (a - b);
}

int		div(int a, int b)
{
	return (a / b);
}

int		mul(int a, int b)
{
	return (a * b);
}

int		mod(int a, int b)
{
	return (a % b);
}

int		calculator(int a, int b, operations o)
{
	return (o(a, b));
}

int		main(int argc, char **argv)
{
	operations	a[5];
	char 		*op = "+-/*%";
	int			i;

	i = 0;
	a[0] = &add;
	a[1] = &sub;
	a[2] = &div;
	a[3] = &mul;
	a[4] = &mod;

	if (argc != 4)
		return (0);
	while (i < 5)
	{
		if (argv[2][0] == op[i] && argv[2][1] == 0)
		{
			if (argv[2][0] == '/' && ft_atoi(argv[3]) == 0)
				ft_putstr("Stop : division by zero");
			else if (argv[2][0] == '%' && ft_atoi(argv[3]) == 0)
				ft_putstr("Stop : modulus by zero");
			else
				ft_putnbr(calculator(ft_atoi(argv[1]), ft_atoi(argv[3]), a[i]));
			ft_putchar('\n');
			break;
		}
		i++;
		if (i == 5)
			ft_putstr("0\n");
	}
	return (0);
}
