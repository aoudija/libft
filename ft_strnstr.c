/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:12:54 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/11 19:29:40 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return (haystack);
	while ((haystack[i] != '\0' || needle[j] != '\0') && i < len)
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
