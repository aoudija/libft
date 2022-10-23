/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:12:54 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/23 09:46:58 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *p, const char *needle, size_t len)
{
	size_t	i;
	int		j;
	char	*haystack;

	i = 0;
	j = 0;
	haystack = (char *) p;
	if (*needle == '\0')
		return (haystack);
	while ((haystack[i] && needle[j]) && i < len)
	{
		if (haystack[i] == needle[j])
			j++;
		else if (haystack[i] != needle[j])
			j = 0;
		i++;
	}
	if (j == 0)
		return (NULL);
	return (haystack + (i - j));
}
