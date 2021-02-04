#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
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

void	ft_wm(char *s1, char *s2)
{
	int	i;
	int	j;
	int	count;
	int	s1_len;

	i = 0;
	j = 0;
	s1_len = ft_strlen(s1);
	while (s2[j])
	{
		if (s1[i] == s2[j])
		{
			i++;
		}
		j++;
	}
	if (i == s1_len)
	{
		ft_putstr(s1);
	}

}

int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_wm(argv[1], argv[2]);
	write(1, "\n", 1);
}
