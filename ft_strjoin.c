/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:59:01 by aoudija           #+#    #+#             */
/*   Updated: 2022/11/04 09:24:32 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*sj;
	int		d;
	int		s;

	d = ft_strlen(s1);
	s = ft_strlen(s2);
	len = d + s;
	sj = (char *)malloc(len + 1);
	if (sj == NULL)
		return (NULL);
	ft_strlcpy(sj, s1, d + 1);
	ft_strlcat(sj, s2, len + 1);
	return (sj);
}
