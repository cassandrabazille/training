int	ft_str_is_alpha(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}
#include <stdio.h>
int	main(void)
{
	char test1[] = "bonjour";
	char test2[] = "bjr1234";
	char test3[] = "";

	printf("%d", ft_str_is_alpha(test1));
	printf("%d", ft_str_is_alpha(test2));
	printf("%d", ft_str_is_alpha(test3));
}
