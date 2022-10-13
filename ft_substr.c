/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:23:58 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/13 10:55:24 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strnstr(const char *haystack, const char *needle)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 0;
// 	if (*needle == '\0')
// 		return (haystack);
// 	while ((haystack[i] != '\0' || needle[j] != '\0'))
// 	{
// 		if (haystack[i] == needle[j])
// 			j++;
// 		else if (haystack[i] != needle[j])
// 			j = 0;
// 		i++;
// 	}
// 	if (j == 0)
// 		return (NULL);
// 	return (haystack + (i - j));
// }
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*sub;

	sub = (char *)malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (start <= len && s[start] != 0)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = 0;
	return (sub);
}
