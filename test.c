#include "libft.h"

int main()
{
	char ** s = ft_split(" xxx xx   xarmx x", ' ');
	int i = 0;
	while (s[i])
		printf("&%s&\n",s[i++]);
}
