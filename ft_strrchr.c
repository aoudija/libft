/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:14:32 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/23 09:48:15 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *p, int c)
{
	int		i;
	char	*s;

	s = (char *)p;
	i = ft_strlen(s);
	while (s[i] != c)
	{
		i--;
	}
	return (s + i);
}
