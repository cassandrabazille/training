#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int temp;

	i = 0;
	temp = 0;
	
	while (i < (size - 1))
	{
		if (tab[i + 1] < tab[i])
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

int	main(void)
{
	int test1[] = {4, 2, 1, 5, 3};
	int i;
	int length;

	i = 0;
	length = 5;
	ft_sort_int_tab(test1, length);
	while (i < length)
	{
		printf("%d", test1[i]);
		i++;
	}
}
