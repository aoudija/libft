/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:44:20 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/10 14:37:35 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	char	*tmp;
	int		i;

	i = 0;
	while (i < n + ft_strlen(dst))
	{
		dst[i] = src[i];
		i++;
	}
	return (i);
}
