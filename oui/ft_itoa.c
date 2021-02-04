#include <stdlib.h>
char	*ft_itoa(int num)
{
	char	*str;
	int		sign;
	int		len;
	long int 	num_copy;

	num_copy = num;
	
	if (num_copy == -2147483648)
	{
		str = "-2147483648";
		return (str); // ETAPE 0 ) Securiser le int min.
	}
	if (num <= 0) // ETAPE 1 ) Je dois definir le debut de ma longueur. inf a 0 : je mets 1. sinon, je mets 0;
	{
		len = 1;
	}
	else
		len = 0;


	if (num < 0)
	{
		sign = 1;
		num = num * (-1);
	}
	else
		sign = 0; // ETAPE 2 ) Je dois savoir si num inf ou sup a 0. Si inf : sign = 1 (pour la condition d'arret de mon while + bas). sinon 0. + je mets num en pos si il est neg.


	while (num_copy != 0)
	{
		num_copy = num_copy / 10;
		len++;
	} // ETAPE 3 ) tant que num_copy est diff de 0, j'incremente ma len pour choper la longueur de mon nombre. + je divise par 10 num_copy pour process par dizaines (logique). 


	if (!(str = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL); // ETAPE 4) Une fois la longueur de mon nb total de caracteres en main, je malloc le tout + 1 cuillere a soupe de NULL. Ensuite, faire evenir a feu doux. 


	str[len] = '\0'; 
	len--; // ETAPE 5) ajouter une fin de chaine a l'index "len" de ma chaine. laisser reposer 1 minutes et decrementer de 1 la len pour commencer a assigner des valeurs a str.


	while (len >= sign)
	{
		str[len] = num % 10 + 48;
		num = num / 10;
		len--;
	} // ETAPE 6) Assignation des valeurs a str en partant de la fin. ici le "sign" dependra des condition plus haut. + 3 lignes dans la boucle : j'assigne avec l'ascii, je reduis num et je len--;


	if (sign == 1)
		str[0] = '-'; // ETAPE 7) la question elle est vite repondue. Bisous. 


	return (str);
}
#include <stdio.h>
int 	main(int argc, char **argv)
{
	printf("%s", ft_itoa(-1));
}
