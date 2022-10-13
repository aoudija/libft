/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 00:16:40 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/11 11:43:24 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;
	int		i;

	i = 0;
	d = (char *) dst;
	s = (char *) src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
