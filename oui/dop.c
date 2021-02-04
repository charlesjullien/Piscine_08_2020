#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	num;
	char c;

	num = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	c = nb % 10 + 48;
	ft_putchar(c);
}

int		ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while(str[i] == ' ' || str[i] == '\f' || str[i] == '\t' || str[i] == '\v' || str[i] == '\n' || str[i] == '\r')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (sign * res);
}

void	ft_op(char *first, char *opp, char *second)
{
	int	a;
	int	b;
	char	op;
	int res;

	a = ft_atoi(first);
	b = ft_atoi(second);
	op = opp[0];
	if (op == '-')
	{
		res = a - b;
	}
	else if (op == '+')
	{
		res = a + b;
	}
	else if (op == '/')
	{
		res = a / b;
	}
	else if (op == '*')
	{
		res = a * b;
	}
	ft_putnbr(res);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_op(argv[1], argv[2], argv[3]);
	ft_putchar('\n');
	return (0);
}
