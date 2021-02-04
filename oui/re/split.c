#include <stdio.h>
#include <stdlib.h>

char 	**split(char *str)
{
	int	i = 0;
	int j = 0;
	int k = 0;
	int wordlen = 0;
	int nbrword = 0;
	char 	**res;

	while(str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			i++;
		}
		if (str[i])		
		{
			nbrword++;
		}
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
		{
			i++;
		}
	}
	
	if(!(res = malloc(sizeof(char*) * nbrword + 1)))
		return (NULL);
	i = 0;
	while(k < nbrword)
	{
		wordlen = 0;
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			i++;
		}
		while (str[i] != ' ' && str[i])
		{
			i++;
			wordlen++;
		}
		res[k] = malloc(sizeof(char) * wordlen + 1);
		j = 0;
		while (j < wordlen)
		{
			res[k][j] = str[i - wordlen + j];
			j++;
		}
		res[k][j] = '\0';
		k++;
	}
		res[k] = NULL;
		return (res);
}
int main (int argc, char **argv)
{
	(void)argc;
	int	i;

	i = 0;
	char **lol = split(argv[1]);
		printf("%s\n", lol[0]);
		printf("%s\n", lol[1]);
		printf("%s\n", lol[2]);
		printf("%s\n", lol[3]);
	return (0);
}
