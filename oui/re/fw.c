#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	fw(char *str)
{
	int	i;

	i = 0;
	while ((str[i] && str[i] == ' ') || str[i] == '\t')
	{
		i++;
	}
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	fw(av[1]);
}
