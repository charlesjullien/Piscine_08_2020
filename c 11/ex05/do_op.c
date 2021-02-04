/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjullien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 12:58:00 by cjullien          #+#    #+#             */
/*   Updated: 2020/08/24 22:22:55 by cjullien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prot.h"
#include <unistd.h>

int		len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putnbr(int nb)
{
	long int	num;
	char		c;

	num = nb;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
	}
	c = num % 10 + 48;
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == '-' || str[i] == '\f' || str[i] == '\t'
			|| str[i] == '\v' || str[i] == '\n' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res * sign);
}

int		main(int argc, char **argv)
{
	int	a;
	int	b;

	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if ((argv[2][0] != '-' && argv[2][0] != '+' && argv[2][0] != '/'
			&& argv[2][0] != '*' && argv[2][0] != '%') || len(argv[2]) > 1)
		write(1, "0\n", 2);
	else
	{
		if (argv[2][0] == '-')
			sub(a, b);
		if (argv[2][0] == '+')
			add(a, b);
		if (argv[2][0] == '*')
			mul(a, b);
		if (argv[2][0] == '/')
			div(a, b);
		if (argv[2][0] == '%')
			mod(a, b);
		write(1, "\n", 1);
	}
	return (0);
}
