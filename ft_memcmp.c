/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:51:21 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/10 13:42:56 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	int	i;
	char	*s1;
	char	*s2;

	s1 = (unsigned char *) buf1;
	s2 = (unsigned char *) buf2;

	i = ft_strncmp(buf1,buf2,count);
	return (i);
}
