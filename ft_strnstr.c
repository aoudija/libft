/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:12:54 by aoudija           #+#    #+#             */
/*   Updated: 2022/11/07 15:54:11 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *s, size_t len)
{
	size_t	i;
	size_t	j;
	char	*STR;

	i = 0;
	j = 0;
	STR = (char *) str;
	if (ft_strlen(s) == 0)
		return (STR);
	while (STR[i] && i < len)
	{
		j = 0;
		while (STR[i + j] && s[j]
			&& STR[i + j] == s[j] && i + j < len)
			j++;
		if (j == ft_strlen(s))
			return (STR + i);
		i++;
	}
	return (0);
}
