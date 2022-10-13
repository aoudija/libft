/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:14:45 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/11 11:29:51 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *) dst;
	s = (char *) src;
	if (d > s)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	else
		ft_memcpy(d, s, n);
	return (d);
}
