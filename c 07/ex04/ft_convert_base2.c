/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjullien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 23:08:30 by cjullien          #+#    #+#             */
/*   Updated: 2020/08/27 12:33:33 by cjullien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int					ft_atoi_base(char *str, char *base);

int					ft_strlen(char *str);

int					checkbase(char *base);

char				*ft_strrev(int size, char *str)
{
	int			i;
	int			j;
	char		swap;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		swap = str[i];
		str[i] = str[j];
		str[j] = swap;
		i++;
		j--;
	}
	return (str);
}

int					base_convertor(char *str, char *base, long int nbr)
{
	long int	baselen;
	int			sign;
	int			i;

	i = 0;
	sign = 1;
	baselen = ft_strlen(base);
	if (nbr < 0)
	{
		sign = -1;
		nbr = nbr * (-1);
	}
	if (nbr == 0)
	{
		str[i++] = base[nbr % baselen];
	}
	while (nbr > 0)
	{
		str[i++] = base[nbr % baselen];
		nbr = nbr / baselen;
	}
	if (sign == -1)
		str[i++] = '-';
	return (i);
}

char				*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				lenght;
	long int		nb;
	char			*str;

	lenght = 0;
	if (checkbase(base_from) == 0 || checkbase(base_to) == 0)
		return (NULL);
	if (!(str = malloc(sizeof(char) * 32)))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	lenght = base_convertor(str, base_to, nb);
	ft_strrev(lenght, str);
	str[lenght] = '\0';
	return (str);
}
