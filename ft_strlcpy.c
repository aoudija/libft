/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:42:37 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/09 13:46:07 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *) dst;
	s = (char *) src;
	i = 0;
	while (i < dstsize)
	{
		d[i] = s[i];
		i++;
	}
	return (i);
}
