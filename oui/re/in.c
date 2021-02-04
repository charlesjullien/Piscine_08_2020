#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

void	ft_in(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s2[j])
		j++;
	while (s1[i])
	{
		if (checkchar(i, s1[i], s1) == 1 && checkchar(j, s1[i], s2) == 0)
		{
			ft_putchar(s1[i]);
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	ft_in(argv[1], argv[2]);
}
