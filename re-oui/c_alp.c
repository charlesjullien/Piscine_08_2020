#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putnbr(int nb)
{
	long int num;
	char c;

	num = nb;
	if (num >= 10)
	{
		ft_putnbr(num / 10);
	}
	c = num % 10 + 48;
	ft_putchar(c);
}

int		check_char(char *str, char c, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (c == str[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		count_char(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (c == str[i])
		{
			count++;
		}
		i++;
	}
	return (count);
}

int		c_alp(char *str)
{
	int	i;
	int	count;
	int	j;
	int len;
	int nbr_chars;

	i = 0;
	j = 0;
	count = 0;
	nbr_chars = 0;
	len = ft_strlen(str);
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (check_char(str, str[i], i) == 1)
			{
				nbr_chars++;
			}
		}
		i++;
	}
	i = 0;
		while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (check_char(str, str[i], i) == 1)
			{
				count = count_char(str, str[i]);
				ft_putnbr(count);
				ft_putchar(str[i]);
				if (nbr_chars == 1)
				{
					return (0);			
				}
				else
				{	
					ft_putchar(',');
					ft_putchar(' ');
				}
				nbr_chars--;
			}
		}
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	c_alp(argv[1]);
	ft_putchar('\n');
	return (0);
}
