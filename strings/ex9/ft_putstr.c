#include <unistd.h>

void ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{	
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	ft_putstr("bonjour42\n");
	ft_putstr("hello How are you?\n");
	ft_putstr("\n");
}
