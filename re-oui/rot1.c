#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'y')
		{
			str[i] = str[i] + 1;
		}
		else if (str[i] == 'z')
			str[i] = 'a';
		if (str[i] >= 'A' && str[i] <= 'Y')
		{
			str[i] = str[i] + 1;
		}
		else if (str[i] == 'Z')
			str[i] = 'A';
		ft_putchar(str[i]);
		i++;
	}
}

int main (int argc, char **argv)
{
	rotone(argv[1]);
	return (0);
}
