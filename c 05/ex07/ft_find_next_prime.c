/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjullien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 15:15:49 by cjullien          #+#    #+#             */
/*   Updated: 2020/08/12 14:29:49 by cjullien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (x <= nb / x)
	{
		if (nb % x == 0)
		{
			return (0);
		}
		x++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int index;

	index = nb;
	if (nb <= 1)
	{
		return (2);
	}
	while (index >= nb)
	{
		if (ft_is_prime(index) == 1)
		{
			return (index);
		}
		index++;
	}
	return (nb);
}
