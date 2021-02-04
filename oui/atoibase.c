#include <stdio.h>

int		ft_strlen(char *lol)
{
	int	i;

	i = 0;
	while (lol[i])
	{
		i++;
	}
	return (i);
}
int		checkchar(char c)
{	
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F'))
		return (1);
	else
		return (0);
}

int		ft_atoi_base(char *str, int str_base)
{
	int	sign;
	int res;
	int	i;

	sign = 1;
	res = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (str[i] != '\0' && (str_base >= 2 && str_base <= 16) && checkchar(str[i]) == 1)
	{
		if (str[i] >= '0' && str[i] <= '9')
				res = res * str_base + str[i] - 48;
		if (str[i] >= 'a' && str[i] <= 'f')
				res = res * str_base + str[i] - 'a' + 10;
		if (str[i] >= 'A' && str[i] <= 'Z')
				res = res * str_base + str[i] - 'A' + 10;
		i++;
	}
	return (sign * res);
}

int main (int argc, char **argv)
{
	printf("%d", ft_atoi_base(argv[1], 2));
}
