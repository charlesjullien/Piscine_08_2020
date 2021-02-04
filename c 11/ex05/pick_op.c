/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pick_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjullien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 16:47:20 by cjullien          #+#    #+#             */
/*   Updated: 2020/08/24 22:11:03 by cjullien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prot.h"
#include <unistd.h>

void	add(int a, int b)
{
	ft_putnbr(a + b);
}

void	sub(int a, int b)
{
	ft_putnbr(a - b);
}

void	mul(int a, int b)
{
	ft_putnbr(a * b);
}

void	div(int a, int b)
{
	if (b != 0)
		ft_putnbr(a / b);
	else
		write(1, "Stop : division by zero", 23);
}

void	mod(int a, int b)
{
	if (b != 0)
		ft_putnbr(a % b);
	else
		write(1, "Stop : modulo by zero", 21);
}
