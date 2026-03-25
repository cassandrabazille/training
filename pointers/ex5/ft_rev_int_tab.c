void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

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
#include <stdio.h>
int	main(void)
{	
	int i;
	int size_test;
	
	i = 0;
	size_test = 5;
	int tab_test[] = {1, 5, 4, 3, 2};
	ft_rev_int_tab(tab_test, size_test);
	while (i < size_test)
	{
		printf("%d", tab_test[i]);
		i++;
	}
	return (0);
}
