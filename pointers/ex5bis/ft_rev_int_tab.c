#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int temp;

	i = 0;
	temp = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

int	main(void)
{	
	int i ;
	int size_test;

	i = 0;
	size_test = 5;
	int test1[] = {0, 1, 2, 3, 4};
	ft_rev_int_tab(test1, size_test);
	while (i < size_test)
	{
		printf("%d", test1[i]);
		i++;
	}
	return (0);
}
