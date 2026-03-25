#include <stdio.h>

char *ft_strcapitalize(char *str)
{
	int i;
	int new_word;
	
	new_word = 1;
	i = 0;

	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] > '0' && str[i] <'9'))
		{
		if ((new_word == 1) && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			new_word = 0;
		}
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}

int	main(void)
{
	char test[] = "hello, how are you doing? 42words forty-two; fifty+and+one";
	printf("%s", ft_strcapitalize(test));
	
}
