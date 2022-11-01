/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:51:21 by aoudija           #+#    #+#             */
/*   Updated: 2022/11/01 10:35:28 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t count)
{
	int				i;
	unsigned char	*p1;
	unsigned char	*p2;
	int				r;

	r = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (count--)
	{
		if (p1[i] != p2[i])
		{
			r = p1[i] - p2[i];
			return (r);
			// if (p1[i] > p2[i])
			// 	return (1);
			// else if (p1[i] < p2[i])
			// 	return (-1);
		}
		i++;
	}
	return (0);
}
