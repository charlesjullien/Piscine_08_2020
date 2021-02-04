#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_cam(char *str)
{
	int		i;
	int		j;
	char	*res;
	int		len;
	int		count_;

	i = 0;
	j = 0;
	len = ft_strlen(str);
	count_ = 0;
	while (str[i])
	{
		if (str[i] == '_')
		{
			count_++;
		}
		i++;
	}
	i = 0;
	if(!(res = malloc(sizeof(char) * len - count_)))
		return (NULL);
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	i = 0;
	while (str[i])
	{
		while (str[i] == '_' && str[i])
		{
			i++;
		}
		if (str[i] >= 'a' && str[i] <= 'z' && i != 0)
		{
			res[j] = str[i] - 32;
			j++;
			i++;
		}
		while (str[i] != '_' && str[i])
		{
			res[j] = str[i];
			j++;
			i++;
		}
	}
	res[j] = '\0';
	ft_putstr(res);
	return (res);
}

int main(int argc, char **argv)
{
	(void)argc;
	ft_cam(argv[1]);
	write(1, "\n", 1);
	return(0);
}
