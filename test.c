#include "libft.h"

int main()
{
	char **s;
    //char *sh;
	int i = 0;
    char *l = "   amine oudija  ";
	s = ft_split(l,' ');
	while (s[i])
	{
		printf("'%s'\n",s[i]);
		i++;
	}
}