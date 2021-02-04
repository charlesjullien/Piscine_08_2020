#include <stdlib.h>
#include <stdio.h>

int		*range(int min, int max)
{
	int	*res;
	int	i;

	i = 0;
	if (min > max)
		return (0);
	if(!(res = malloc(sizeof(int) * (max - min) + 1)))
		return (NULL);
	while (min <= max)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (res);
}
int main()
{
	int	i;

	i = 0;
	int *lol = range(4, 4);
	while (lol[i])
	{
		printf("%d", lol[i]);
		i++;
	}
	return (0);
}
