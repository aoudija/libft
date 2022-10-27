/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:22:17 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/27 17:45:18 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	index_start(char const *s1, char const *set)
{
	int		j;
	int		i;

	i = 0;
	j = ft_strlen(s1);
	while (i < j)
	{
		if (ft_strchr(set, s1[i])== 0)
			break;
		i++;
	}
	return (i);
}

int	index_end(char const *s1, char const *set)
{
	int		j;
	int		i;

	i = 0;
	j = ft_strlen(s1);
	while (i < j)
	{
		if (ft_strchr(set, s1[len - i - 1])== 0)
			break;
		i++;
	}
	return (i);
}

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char	*tri;
// 	int		i;
// 	int		j;
// 	int		x;

// 	x = 0;
// 	i = index_start(s1, set);
// 	j = index_end(s1, set);
// 	tri = (char *)malloc(j - i + 1);
// 	if (tri == NULL)
// 		return (NULL);
// 	if (s1 == NULL)
// 		return (NULL);
// 	while (i <= j)
// 	{
// 		tri [x] = s1[i];
// 		i++;
// 		x++;
// 	}
// 	tri[x] = 0;
// 	return (tri);
// }

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*tr;

	if (s1 == NULL)
		return (NULL);
	i = index_start(s1, set);
	j = index_end(s1, set);
	if (set == NULL)
		return (ft_strdup(s1));
	if (i >= j)
		return (ft_strdup(""));
	newstr = (char *)malloc(sizeof(char) * (end - start + 1));
	if (newstr == NULL)
		return (NULL);
	ft_strlcpy(newstr, s1 + start, end - start + 1);
	return (newstr);
}