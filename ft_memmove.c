/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:14:45 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/11 22:38:21 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, int n)
{
	char	*d;
	char	*s;
	int		l;

	d = (char *) dst;
	s = (char *) src;
	l = ft_strlen(s);
	if (d > s)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	
	return (d);
}
