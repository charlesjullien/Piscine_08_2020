/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjullien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 21:45:47 by cjullien          #+#    #+#             */
/*   Updated: 2020/08/04 22:40:56 by cjullien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_end_of_comb(int a, int b)
{
	char	c;

	c = (a / 10) + 48;
	write(1, &c, 1);
	c = (a % 10) + 48;
	write(1, &c, 1);
	write(1, " ", 1);
	c = (b / 10) + 48;
	write(1, &c, 1);
	c = (b % 10) + 48;
	write(1, &c, 1);
}

void	ft_putchar(int a, int b)
{
	char c;

	if (a == 98 && b == 99)
	{
		print_end_of_comb(a, b);
	}
	else
	{
		c = (a / 10) + 48;
		write(1, &c, 1);
		c = (a % 10) + 48;
		write(1, &c, 1);
		write(1, " ", 1);
		c = (b / 10) + 48;
		write(1, &c, 1);
		c = (b % 10) + 48;
		write(1, &c, 1);
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a != b)
			{
				ft_putchar(a, b);
			}
			b++;
		}
		a++;
	}
}
