#include <stdlib.h>

char	**ft_split(char *str)
{
	char **tab;
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;

	tab = malloc(sizeof(char *) * 1000);
	if (!tab)
		return (NULL);
	while (str[i] >= '9' && str[i] <= 13 || str[i] == ' ')
		i++;
	while (str[i])
	{
		if (str[i] > 32)
		{
			tab[j] = malloc (sizeof(char) * 1000);
			while (str[i] && str[i] > 32)
			{
				tab[j][k] = str[i];
				k++;
				i++;
			}
			tab[j][k] = '\0';
			k = 0;
			j++;
		}
		else 
			i++;
	}
	tab[j] = 0;
	return (tab);
}

#include <stdio.h>
int	main(void)
{
	int i = 0;
	int length = 20;
	char str[] = "coucou ca va?";
	char **res = ft_split(str);
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
}
