void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
#include <stdio.h>
int	main(void)
{
	int x;
	int y;
	
	x = 12;
	y = 15;
	printf("BEFORE x : %d, y : %d\n", x, y);
	ft_swap(&x,&y);
	printf("AFTER x : %d, y: %d\n", x, y);
}
