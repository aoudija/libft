#include "libft.h"

int main()
{
	char ** s = ft_split(" t t t  tripouille  42  ", ' ');
	int i = 0;
	while (s[i])
	{
		printf("&%s&\n",s[i]);
		i++;
	}
}
