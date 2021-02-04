/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjullien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 21:57:35 by cjullien          #+#    #+#             */
/*   Updated: 2020/08/26 15:08:55 by cjullien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_it_word(char c, char *charset)
{
	int		i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int		word_counter(char *str, char *charset)
{
	int		counter;
	int		i;
	int		word;

	counter = 0;
	i = 0;
	word = 0;
	while (str[i])
	{
		if (is_it_word(str[i], charset) == 1)
		{
			word = 0;
		}
		else if (word == 0)
		{
			word = 1;
			counter++;
		}
		i++;
	}
	return (counter);
}
char	**splitter(char *str, char *charset, char **tab, int word_len)
{
	int	k;
	int	l;
	int j;

	k = 0;
	j = 0;
	while (k < word_counter(str, charset))
	{
		word_len = 0;
		while (str[j] && is_it_word(str[j], charset) == 1)
			j++;
		while (str[j++] && is_it_word(str[j], charset) == 0)
			word_len++;
		if (!(tab[k] = malloc(sizeof(char) * word_len + 1)))
			return (0);
		l = -1;
		while (++l <= word_len)
			tab[k][l] = str[l + j - word_len - 1];
		tab[k][l] = '\0';
		k++;
	}
	tab[k] = NULL;
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		word_len;

	word_len = 0;
	tab = malloc(sizeof(char*) * word_counter(str, charset) + 1);
	if (tab == NULL)
		return (NULL);
	splitter(str, charset, tab, word_len);
	return (tab);
}
