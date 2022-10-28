/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:22:17 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/27 23:56:25 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	index_start(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1);	
	while (i < j)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

int	index_end(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1);
	while (i < j)
	{
		if (ft_strchr(set, s1[j - i - 1]) == 0)
			break ;
		i++;
	}
	return (j - i);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*tr;

	i = index_start(s1, set);
	j = index_end(s1, set);
	if (i >= j)
		return (ft_strdup(""));
	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	tr = malloc(j - i + 1);
	if (tr == NULL)
		return (NULL);
	ft_strlcpy(tr, s1 + i, j - i + 1);
	return (tr);
}