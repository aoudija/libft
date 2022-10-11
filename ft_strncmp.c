/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:45:08 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/10 12:24:33 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	r;

	r = 0;
	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		r = s1[i] - s2[i];
		i++;
	}
	if (r < 0)
		return (-1);
	else if (r > 0)
		return (1);
	return (0);
}
