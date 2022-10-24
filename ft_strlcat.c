/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:44:20 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/24 13:23:36 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	d;

	d = ft_strlen(dst);
	i = 0;
	if (n < d)
		return (d + n);
	while (src[i] && i <= n)
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = 0;
	return (i + d);
}
