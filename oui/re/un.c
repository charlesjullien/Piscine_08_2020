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

void	ft_un(char *s1, char *s2)
{
	int	i;
	int j;
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (checkchar(i, s1[i], s1) == 1)
		{
			ft_putchar(s1[i]);
		}
		i++;
	}
	while (s2[j])
	{
		if (checkchar(j, s2[j], s2) == 1 && checkchar(i, s2[j], s1) == 1)
		{
			ft_putchar(s2[j]);
		}
		j++;
	}
}

int main(int argc, char **argv)
{
	ft_un(argv[1], argv[2]);
	return (0);
}
