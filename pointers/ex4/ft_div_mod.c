void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

#include <stdio.h>

int	main(void)
{
	int x;
	int y;
	
	x = 25;
	y = 4;
	printf("BEFORE value x : %d\n and y : %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("AFTER DIV : %d\n, MOD : %d\n", x, y);
}
