/* ft_sub : écrire une fonction qui retourne a - b */

int	ft_sub(int a, int b)
{
	return (a - b);
}
#include <stdio.h>
int	main(void)
{
	int x;
	int y;

	x = 85;
	y = 10;

	printf("%d", ft_sub(x, y));
}
