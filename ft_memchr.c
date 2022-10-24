/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:04:44 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/23 19:33:47 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	cc;

	cc = (unsigned char ) c;
	i = 0;
	s1 = (unsigned char *) s;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (s1[i] == cc)
			return ((void *) s1 + i);
		i++;
	}
	return (NULL);
}
