int	ft_iterative_power(int nb, int power)
{
	int result;
	
	result = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power >= 1)
	{
		result = nb * result;
		power--;
	}
	return (result);
}
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(2,3));
}
