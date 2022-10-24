/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:45:08 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/24 11:31:05 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	r;

	r = 0;
	i = 0;
	if ((int)n < 0 )
		return (-1);
	while ((s1[i] || s2[i]) && i < (int)n)
	{
		if (s1[i] != s2[i])
			r = s1[i] - s2[i];
		i++;
	}	
	if (r < 0 || (size_t)i > ft_strlen(s1))
		return (-1);
	else if (r > 0)
		return (1);
	return (0);
}
