/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjullien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 20:30:06 by cjullien          #+#    #+#             */
/*   Updated: 2020/08/19 18:12:34 by cjullien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*concatenator(int size, char *res, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (j < size)
	{
		k = -1;
		while (strs[j][++k])
		{
			res[i++] = strs[j][k];
		}
		if (j < size - 1)
		{
			k = -1;
			while (sep[++k])
				res[i++] = sep[k];
		}
		j++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*res;
	int		res_len;

	i = 0;
	res_len = 0;
	while (i < size)
	{
		res_len = res_len + (ft_strlen(strs[i]) + (ft_strlen(sep)));
		i++;
	}
	if (!(res = malloc(sizeof(char) * (res_len + 1))))
		return (NULL);
	if (size == 0)
		return (res);
	res = concatenator(size, res, strs, sep);
	return (res);
}
