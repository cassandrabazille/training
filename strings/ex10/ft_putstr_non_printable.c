#include <unistd.h>
void ft_putstr_non_printable(char *str)
{
	int i;
	char *hex;

	i = 0;
	hex = "0123456789abcdef";

	while (str[i])
	{	
		if (str[i] < 32 || str[i]  > 126)
		{
			write(1, "\\", 1);
			write(1, hex + str[i] / 16, 1);
			write(1, hex + str[i] % 16, 1);
		}
		else
		{
                          write(1, &str[i], 1);
		}
		i++;
	}	
}

int	main(void)
{
	ft_putstr_non_printable("Hello\nHow are you ?");
}
