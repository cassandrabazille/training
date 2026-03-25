void ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (i < (size - 1))
	{
		if ((tab[i + 1]) < tab[i])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}
#include <stdio.h>
int	main(void)
{
	int i;
	int size;
	int test1[] = {1, 5, 3, 4, 2};

	size = 5;
	ft_sort_int_tab(test1, size);
	i = 0;
	while (i < size)
	{
		printf("%d", test1[i]);
		i++;
	}
		
}



