/*Assignment name  : aff_last_param
Expected files   : aff_last_param.c
Allowed functions: write
--------------------------------------------------------------------------------

Écrire un programme qui prend des chaînes, et affiche son dernier argument suivi d'un newline.

S'il y a moins d'un argument, le programme affiche juste un newline.

Exemples:

$> ./aff_last_param "zaz" "mange" "des" "chats" | cat -e
chats$
$> ./aff_last_param "j'aime le savon" | cat -e
j'aime le savon$
$> ./aff_last_param
$*/

#include <unistd.h>
void	aff_last_param(char *str)
{
	int i;
	i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}


int	main(int argc, char **argv)
{
	if (argc > 1)
		aff_last_param(argv[argc - 1]);
	write(1, "\n", 1);
}
