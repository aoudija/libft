/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:12:54 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/11 22:31:19 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack,const char *needle, size_t len)
{
	int	i;
	int	j;

	while(haystack[i] != '\0' && needle[j] != 0)
	{
		if (haystack[i]== needle[j])
			j++;
		else if (haystack[i] != needle[j])
			j = 0;
		i++;
	}
	return (haystack + (i - j));
}
int main()
{
    const char *largestring = "bar far mar";
    const char *smallstring = "far";
    char *ptr;

	ptr = ft_strnstr(largestring, smallstring,3);
	printf("%s",ptr);

    return 0;
}
