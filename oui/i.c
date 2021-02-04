#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		checkchar(int index, char c, char *str)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_i(char *s1, char *s2)
{
	int	i;
	int	j;
	int	s2_len;

	i = 0;
	j = 0;
	s2_len = ft_strlen(s2);
	while (s1[i])
	{
			if (checkchar(i, s1[i], s1) == 1 && checkchar(s2_len, s1[i], s2) == 0)
			{
				ft_putchar(s1[i]);
			}
			i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_i(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
