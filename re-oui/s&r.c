#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

void	s_and_r(char *str, char to_find, char replace)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == to_find)
		{
			str[i] = replace;
		}
		i++;
	}
	ft_putstr(str);
}

int main(int argc, char **argv)
{
	if (argc != 4 || ft_strlen(argv[2]) != ft_strlen(argv[3]) || ft_strlen(argv[2]) != 1 || ft_strlen(argv[3]) != 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	char a = argv[2][0];
	char b = argv[3][0];
	s_and_r(argv[1], a, b);
	write(1, "\n", 1);
	return (0);
}
