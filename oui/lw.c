#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int	start;
	int	end;

	start = 0;
	end = 0;
	char *str;

	str = argv[1];
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (str[end])
	{
		end++;
	}
	if (end > 0)
	{
		end = end -1;
	}
	while (str[end] == ' ' || str[end] == '\t')
	{
		end--;
	}
	start = end;
	while (str[start] != ' ' && str[start] != '\t' && start >= 0)
	{
		start--;
	}
	start = start + 1;
	while (start <= end)
	{
		ft_putchar(str[start]);
		start++;
	}
	ft_putchar('\n');
	return (0);
}
