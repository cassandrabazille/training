char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' )
			str[i] = str[i] - 32;
		else 
			i++;	
	}
	return (str);
}


#include <stdio.h>

int	main(void)
{
	char test1[] = "abcde";
	char test2[] = "ABCDE";
	char test3[] = "abc123REde";
	char test4[] = "";

	printf("%s", ft_strupcase(test1));
	printf("%s", ft_strupcase(test2));
	printf("%s", ft_strupcase(test3));
	printf("%s", ft_strupcase(test4));
}
