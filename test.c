#include "libft.h"


int main()
{
    int i = 0;
   char **s = ft_split("amine",0);
   while(s[i])
    {
        printf("%s\n",s[i]);
        i++;
    }
}
