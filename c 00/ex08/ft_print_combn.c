/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjullien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 19:26:53 by cjullien          #+#    #+#             */
/*   Updated: 2020/08/25 21:44:30 by cjullien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	display_n_digits(int *numbers, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(48 + numbers[i]);
		i++;
	}
	if (numbers[0] != 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	find_combo(int *numbers, int actual, int n, int ibis)
{
	int	i;
	int	maximum;

	if (n == actual)
	{
		display_n_digits(numbers, n);
	}
	else
	{
		i = ibis + 1;
		maximum = 10 - (n - actual);
		while (i <= maximum)
		{
			numbers[actual] = i;
			find_combo(numbers, actual + 1, n, i);
			i++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	numbers[10];
	int	i;

	i = 0;
	while (i < n)
	{
		numbers[i] = 0;
		i++;
	}
	find_combo(numbers, 0, n, -1);
}
