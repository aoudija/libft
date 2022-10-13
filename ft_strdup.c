/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:54:36 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/12 13:31:13 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = (char *)ft_calloc(ft_strlen(s1), 1);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}