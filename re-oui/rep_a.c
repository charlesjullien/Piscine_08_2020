#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rep(char *str)
{
	int	i;
	int	count;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			count = str[i] - 65;
			while (count >= 0)
			{
				ft_putchar(str[i]);
				count--;
			}
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			count = str[i] - 97;
			while (count >= 0)
			{
				ft_putchar(str[i]);
				count--;
			}
		}
		i++;
	}
}

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_rep(argv[1]);
	ft_putchar('\n');
	return (0);
}
