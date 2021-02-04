#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str) // charset == space.
{
	int	i;
	int	wordlen;
	char **returned;
	int nbrword;
	int j;
	int k;

	nbrword = 0;
	wordlen = 0;
	i = 0;
	while(str[i])
	{
		while (str[i] == ' ')
			i++;
		if (str[i])
			nbrword++;
		while (str[i] != ' ' && str[i])
			i++;
	}
	if((returned = malloc((nbrword + 1) * sizeof(char*))) == NULL)
			return(NULL);
	i = 0;
	j = 0;
	while(j < nbrword)
	{
		wordlen = 0;
		while (str[i] == ' ')
			i++;
		while (str[i] != ' ' && str[i])
		{
			wordlen++;
			i++;
		}
		returned[j] = malloc((wordlen) * sizeof(char));
		k = 0;
		while(k < wordlen)
		{
			returned[j][k] = str[i - wordlen + k];
			k++;
		}
		returned[j][k] = '\0';
		j++;
	}
	returned[j] = NULL;
	return (returned);
}

int main (int argc, char **argv)
{
	(void)argc;
	int	i;

	i = 0;
	char **res = ft_split(argv[1]);
	while(res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
	return (0);
}
