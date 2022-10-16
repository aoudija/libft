/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:22:17 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/16 15:55:16 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	index_start(char const *s1, char const *set)
{
	int		j;
	int		i;

	i = 0;
	j = 0;
	while (set[i])
	{
		while (s1[j] == set[i])
		{
			i = 0;
			j++;
		}
		i++;
	}
	return (j);
}

int	index_end(char const *s1, char const *set)
{
	int		j;
	int		i;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (set[i])
	{
		while (s1[j] == set[i])
		{
			i = 0;
			j--;
		}	
		i++;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tri;
	int		i;
	int		j;
	int		x;

	x = 0;
	i = index_start(s1, set);
	j = index_end(s1, set);
	tri = (char *)malloc(j - i + 1);
	if (tri == NULL)
		return (NULL);
	if (s1 == NULL)
		return (NULL);
	while (i <= j)
	{
		tri [x] = s1[i];
		i++;
		x++;
	}
	tri[x] = 0;
	return (tri);
}
