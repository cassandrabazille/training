/* ft_add : écrire une fonction qui retourne a + b */

int	ft_add(int a, int b)
{
	return (a + b);

}
#include <stdio.h>
int	main(void)
{
	int x;
	int y;

	x = 12;
	y = 14;

	printf("%d", ft_add(x, y));
}
