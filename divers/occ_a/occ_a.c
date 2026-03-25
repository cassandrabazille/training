/* Compter le nombre d’occurrences de la lettre 'a' dans une chaîne passée en argument, puis afficher ce nombre suivi d’un retour à la ligne.*/
#include <unistd.h>
void	ft_putnbr(int nb)
{
	char c;
	
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}
void	occ_a(char *str)
{
	int i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == 'a')
			count++;
		i++;
	}
	ft_putnbr(count);
	write(1, "\n", 1);
}

int	main(void)
{
	char *test = "holaaaaaaaaaaaa chichas";
	occ_a(test);
}
