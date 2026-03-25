int	ft_str_is_lowercase(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{ 
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);	
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_str_is_lowercase("acde"));
	printf("%d", ft_str_is_lowercase("ABCDE"));
	printf("%d", ft_str_is_lowercase("1234"));
	printf("%d", ft_str_is_lowercase(""));
}
