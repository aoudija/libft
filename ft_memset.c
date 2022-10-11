/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:56:24 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/08 01:52:10 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, int n)
{
	unsigned char	*stri ;
	int				i;

	stri = (unsigned char *) str;
	i = 0;
	while (i < n)
	{
		stri[i] = c;
		i++;
	}
	return (stri);
}
