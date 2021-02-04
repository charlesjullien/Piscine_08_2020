#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	lw(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		i++;
	}
	if (i > 0)
		i = i -1;
	while (str[i] == '\t' || str[i] == ' ')
	{
		i--;
	}
	j = i;
	while (str[j] != '\t' && str[j] != ' ')
	{
		j--;
	}
	j++;
	while (j <= i)
	{
		ft_putchar(str[j]);
		j++;
	}
}

int main (int ac, char **av)
{
	lw(av[1]);
}
