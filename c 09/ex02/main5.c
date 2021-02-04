#include <stdio.h>

char	**ft_split(char *str, char *charset);

int main()
{

	printf("\033[1;31m");
	printf("Expected results :\n");
	printf("\033[0m");
	printf("\n");

	printf("Bonjour\n");
	printf("tout\n");
	printf("le\n");
	printf("monde\n");
	printf("!\n");
	printf("\n");
	printf("Bon\n");
	printf("jour\n");
	printf("le\n");
	printf("mon\n");
	printf("de!\n");

	printf("\033[1;31m");
	printf("Your results :\n");
	printf("\033[0m");
	printf("\n");
	char **create;
	int i = 0;

	char *charset = " ";
	char *str = "Bonjour tout le monde !";
	create = ft_split(str, charset);
	while(create[i])
	{
		printf("%s\n", create[i]);
		i++;
	}

	printf("\n");
	char **create2;
	i = 0;

	char *charset2 = "12";
	char *str2 = "Bon12jour12le12mon1de!";
	create2 = ft_split(str2, charset2);
	while(create2[i])
	{
		printf("%s\n", create2[i]);
		i++;
	}

	return (0);
}