/*Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);
  strcpy()
              These  functions copy the string pointed to by src, into a string at the buffer pointed to by dst.  The programmer is respon‐
              sible for allocating a destination buffer large enough, that is, strlen(src) + 1.  For the difference between the  two  func‐
              tions, see RETURN VALUE.
*/

char    *ft_strcpy(char *s1, char *s2)
{
	int i;
	i = 0;

	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
#include <stdio.h>
int	main(void)
{
	char dst[16];
	char src[] = "hello 42 student";
	printf("%s", ft_strcpy(dst, src));


}

