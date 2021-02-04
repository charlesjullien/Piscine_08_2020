#include <stdlib.h>

int	is_set(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	nbr_words(char *str, char *charset)
{
	int	i;
	int nbrwords;

	i = 0;
	nbrwords = 0;
	while (str[i])
	{
		while (str[i] && is_set(str[i], charset) == 1)
		{
			i++;
		}
		if (str[i] && is_set(str[i], charset) == 0)
		{
			nbrwords++;
		}
		while (str[i] && is_set(str[i], charset) == 0)
		{
			i++;
		}
	}
	return (nbrwords);
}

char	**ft_split(char *str, char *charset, char **res)
{
	int	i;
	int	j;
	int	k;
	int wordlen;
	int	nbrwords;

	i = 0;
	j = 0;
	k = 0;
	wordlen = 0;
	nbrwords = nbr_words(str, charset);
	while (j < nbrwords)
	{
		wordlen = 0;
		k = 0;
		while (str[i] && is_set(str[i], charset) == 1)
		{
			i++;
		}
		while (str[i] && is_set(str[i], charset) == 0)
		{
			wordlen++;
			i++;
		}
		if (!(res[j] = malloc(sizeof(char) * wordlen + 1)))
			return (0);
		while (k < wordlen)
		{
			res[j][k] = str[i - wordlen + k];
			k++;
		}
		res[j][k] = '\0';
		j++;
	}
	res[j] = NULL;
	return (res);
}
#include <stdio.h>
int main (int argc, char **argv)
{
	char **res;
	if (!(res = malloc(sizeof(char*) * nbr_words(argv[2], argv[1]) + 1)))
		return (0);
	ft_split(argv[2], argv[1], res);
	int i = 0;
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
	return (0);
}
