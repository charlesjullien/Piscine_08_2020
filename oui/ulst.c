#include <stdio.h>

int main (int argc, char **argv)
{
	(void)argc;
	char *str = argv[1];
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	printf("%s", str);
	return (0);
}
