/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjullien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 16:42:06 by cjullien          #+#    #+#             */
/*   Updated: 2020/08/23 16:12:12 by cjullien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_in_charset(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		get_nbr_word(char *str, char *charset)
{
	int	i;
	int	nbrword;

	i = 0;
	nbrword = 0;
	while (str[i])
	{
		while (is_in_charset(charset, str[i]) == 0)
			i++;
		if (str[i] != '\0')
			nbrword++;
		while (is_in_charset(charset, str[i]) == 1 && str[i])
			i++;
	}
	return (nbrword);
}

char	**splitter(char **res, char *str, char *charset, int wordlen)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (j < get_nbr_word(str, charset))
	{
		wordlen = 0;
		k = 0;
		while (is_in_charset(charset, str[i]) == 0 && str[i])
			i++;
		while (str[i++] && is_in_charset(charset, str[i]) == 1)
			wordlen++;
		if (!(res[j] = malloc(sizeof(char) * wordlen)))
			return (NULL);
		while (k <= wordlen)
		{
			res[j][k] = str[i - wordlen + k - 1];
			k++;
		}
		res[j][k] = '\0';
		j++;
	}
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	int		nbrword;
	char	**res;
	int		wordlen;

	wordlen = 0;
	nbrword = get_nbr_word(str, charset);
	if (!(res = malloc(sizeof(char*) * nbrword + 1)))
		return (NULL);
	res = splitter(res, str, charset, wordlen);
	res[nbrword] = NULL;
	return (res);
}
