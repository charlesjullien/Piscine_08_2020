/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_8.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjullien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 22:55:46 by cjullien          #+#    #+#             */
/*   Updated: 2020/08/24 23:29:55 by cjullien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_digits(int *numbers, int n)
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

void	n_recursive(int *numbers, int actual, int n, int next_i)
{
	int	maximum;
	int	i;

	if (actual == n)
	{
		print_digits(numbers, n);
	}
	else
	{
		maximum = 10 - (n - actual);
		i = next_i + 1;
		while (i <= maximum)
		{
			numbers[actual] = i;
			n_recursive(numbers, actual + 1, n, i); //appel recursif, jusqu'q ce que actual == n. ensuite, on depile et i s'incremente au depilage. 
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
	n_recursive(numbers, 0, n, -1);
}
