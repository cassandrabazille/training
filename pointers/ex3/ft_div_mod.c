void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b; 
}
#include <stdio.h>
int	main(void)
{
	int x;
	int y;
	int division;
	int modulo;
	
	x = 14;
	y = 3;

	ft_div_mod(x, y, &division, &modulo);
	printf("x : %d and y : %d DIV : %d and MOD :%d", x, y, division, modulo);


}
