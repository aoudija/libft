/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:14:32 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/24 09:42:20 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *p, int c)
{
	int		i;
	char	*s;

	c =(char)c;
	s = (char *)p;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return (s + i);
		i--;
	}
	return (NULL);
}
