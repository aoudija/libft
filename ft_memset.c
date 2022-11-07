/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:56:24 by aoudija           #+#    #+#             */
/*   Updated: 2022/11/07 18:31:31 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*stri;
	size_t			i;

	stri = (unsigned char *) str;
	i = 0;
	while (i < n)
	{
		stri[i] = c;
		i++;
	}
	return (stri);
}
