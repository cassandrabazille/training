/*t_mul : écrire une fonction qui retourne a * b*/

int	ft_mul(int a, int b)
{
	return (a * b);
}

#include <stdio.h>
int	main(void)
{
	int x;
	int y;

	x = 4;
	y = 5;

	printf("%d",ft_mul(x, y));
}
