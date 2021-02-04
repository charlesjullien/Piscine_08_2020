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

void	ft_strrev(char *str)
{
	int	i;
	int	j;
	int	len;
	char temp;

	i = 0;
	len = 0;

	while(str[len])
	{
		len++; //on a besoin de la longueur de la chaine. a la fin du while; le len sera sur l'index de la chaine correspondant au \0 (fin de chaine).
	}

	j = len -1; // on assigne la longeur de la chaine à J et on enleve 1 pcq on veut que J soit pile sur l'index du dernier caractere de la chaine; pas sur le \0; 

	while (i < (len / 2)) //tant que mon index i (qui va s'incrementer) est inferieur à la moitié de la longueur de ma chaine. 
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	} // dans ce while, je fais i++ et j-- pour intervertir mon premier char avec le dernier. le deuxieme avec l'avant dernier, le troisieme avec l'avant avant dernier, etc... jusqu'à ce que i arrive à la moitié de ma chaine; sinon je vais les re-intervertir et ca me servira a rien pcq je vais revenir à ma chaine d'origine. Il faut aussi creer un char temp (temporaire) comme dans ft_swap, pour stocker mon caractere i avant de l'intervertir avec j.
	ft_putstr(str);
}

int main(int argc, char **argv)
{
	ft_strrev(argv[1]);
}
