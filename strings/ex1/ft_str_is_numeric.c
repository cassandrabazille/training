int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_str_is_numeric("123456"));
	printf("%d", ft_str_is_numeric("abdef"));
	printf("%d", ft_str_is_numeric("ABC135"));
	printf("%d", ft_str_is_numeric(""));


	return (0);
}
