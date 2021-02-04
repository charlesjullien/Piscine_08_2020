#include <unistd.h>
#include <stdio.h>

void	find_h(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	while (s2[j])
	{
		if (s1[i] == s2[j])
			i++;
		j++;
	}
	if (s1[i]  == '\0')
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

int main(int argc, char **argv)
{
	find_h(argv[1], argv[2]);
}
