#include <stdlib.h>

char	*itoa(int num)
{
	int		len;
	int		sign;
	int		num_copy;
	char	*res;

	num_copy = num;

	if (num == -2147483648)
	{
		if(!(res = malloc(sizeof(char) * 11 + 1)))
			return (NULL);
		res = "-2147483648";
		return (res);
	}
	if (num <= 0)
		len = 1;
	else
		len = 0;

	if (num < 0)
	{
		sign = 1;
		num = -num;
	}
	else
		sign = 0;
	while (num_copy != 0)
	{
		num_copy = num_copy / 10;
		len++;
	}
	if(!(res = malloc(sizeof(char) * len + 1)))
		return (NULL);
	res[len] = '\0';
	len--;
	while (len >= sign)
	{
		res[len] = num % 10 + 48;
		num = num / 10;
		len--;
	}
	if (sign == 1)
		res[len] = '-';
	return (res);
}
#include <stdio.h>
int main()
{
	printf("%s", itoa(-2147483648));
	return (0);
}
