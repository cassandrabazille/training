#include <unistd.h>

void	ft_rot_13(char *str)
{
	int i;
  
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
                  {
                         str[i] = str[i] + 13;
                          write(1, &str[i], 1);
                  }
                  else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
		{
			str[i] = str[i] - 13;
			write(1, &str[i], 1);
		}
		else 
			write(1, &str[i], 1);
		i++;
          }
	   write(1, "\n", 1);

}

int	main(void)
{
	char test[] = "abcdefghijklmnopqrstvwxyz";
	char test1[] = "My horse is Amazing.";
	char test2[] = "NxwuM mYXVWm , 23l ";
	ft_rot_13(test);
	ft_rot_13(test1);
	ft_rot_13(test2);

	return (0);
}
