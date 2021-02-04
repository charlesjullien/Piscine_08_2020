/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjullien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 14:34:10 by cjullien          #+#    #+#             */
/*   Updated: 2020/08/17 15:56:09 by cjullien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void				ft_putchar(char c)
{
	write(1, &c, 1);
}

int					ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int					checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) == 0 || ft_strlen(base) == 1)
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
		{
			return (0);
		}
		while (base[j])
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void				base_convertor(long int num, char *base)
{
	long int	baselen;

	baselen = ft_strlen(base);
	if (num >= baselen)
	{
		base_convertor(num / baselen, base);
	}
	ft_putchar(base[num % baselen]);
}

void				ft_putnbr_base(int nbr, char *base)
{
	long int	num;

	num = nbr;
	if (checkbase(base))
	{
		if (num < 0)
		{
			write(1, "-", 1);
			num = -num;
		}
		base_convertor(num, base);
	}
}
