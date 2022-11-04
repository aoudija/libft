/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:04:44 by aoudija           #+#    #+#             */
/*   Updated: 2022/11/04 18:28:12 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s1;
	char	cc;

	cc = c;
	i = 0;
	s1 = (char *)s;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (s1[i] == cc)
			return (s1 + i);
		i++;
	}
	return (NULL);
}
