int	lmul(unsigned int a, unsigned int b)
{
	unsigned int d;

	if (a == 0 || b ==0)
		return (0);
	if (a > b)
		d = (a / 2) + 1;
	else
		d = (b / 2) + 1;
	while (!((a % d) == 0 && (b % d) == 0))
		d--;
	return (a * b / d);
}
#include <stdio.h>
int main()
{
	printf("%d\n", lmul(17, 78521));
}
