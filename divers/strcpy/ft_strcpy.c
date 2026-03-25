/*Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);
  strcpy()
              These  functions copy the string pointed to by src, into a string at the buffer pointed to by dst.  The programmer is respon‐
              sible for allocating a destination buffer large enough, that is, strlen(src) + 1.  For the difference between the  two  func‐
              tions, see RETURN VALUE.
*/

char    *ft_strcpy(char *dest, char *src)
{
	int i;
	
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>
int	main(void)
{
	char s1[20] = {0};
	char s2[] = "hello 42 student!";

	printf("Avant : %s", s1);
	ft_strcpy(s1, s2);
	printf("Apres : %s", s1);
	return (0);
}

