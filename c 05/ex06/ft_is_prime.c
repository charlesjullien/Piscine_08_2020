/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjullien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 14:58:52 by cjullien          #+#    #+#             */
/*   Updated: 2020/08/12 13:27:10 by cjullien         ###   ########.fr       */
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