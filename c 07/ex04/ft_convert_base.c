/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjullien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 22:53:15 by cjullien          #+#    #+#             */
/*   Updated: 2020/08/24 12:52:00 by cjullien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					find_index_in_base(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i] != c && base[i])
	{
		i++;
	}
	return (i);
}

int					is_it_in_base(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
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
		if (base[i] == '-' || base[i] <= 32
				|| base[i] > 127 || base[i] == '+')
		{
			return (0);
		}
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int					ft_atoi_base(char *str, char *base)
{
	int	atoi;
	int	sign;
	int	i;

	atoi = 0;
	sign = 1;
	i = 0;
	if (checkbase(base) == 0)
		return (0);
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (is_it_in_base(base, str[i]))
	{
		atoi = atoi * ft_strlen(base) + find_index_in_base(base, str[i]);
		i++;
	}
	return (sign * atoi);
}
