/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:12:54 by aoudija           #+#    #+#             */
/*   Updated: 2022/11/01 17:35:54 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *p, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*haystack;
	int		x;

	x = ft_strlen(needle);
	i = 0;
	j = 0;
	haystack = (char *) p;
	if (x == 0 && len == 0)
		return (haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j]
			&& haystack[i + j] == needle[j] && i + j < len)
			j++;
		if (j == ft_strlen(needle))
			return (haystack + i);
		i++;
	}
	return (0);
}
