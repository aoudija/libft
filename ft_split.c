/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:00:47 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/29 10:35:10 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countc(char const *s, char c)
{
	int	i;
	int	ct;

	ct = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			ct++;
		i++;
	}
	return (ct);
}

void	*ft_free(char **table)
{
	int	i;

	i = 0;
	while (table[i])
	{
		free(table[i]);
		i++;
	}
	free(table);
	return (NULL);
}

char	**amin(char **str, char c, char *s)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	j = 0;
	x = 0;
	while (s[j])
	{
		while (s[j] && s[j] != c)
		{	
			i++;
			j++;
		}	
		str[x++] = ft_substr(s, j - i, i);
		if (!str)
			return (ft_free(str));
		while (s[j] && s[j] == c)
			j++;
		i = 0;
	}
	str[x] = NULL;
	return (str);
}

char	**ft_split(char *ss, char c)
{
	char	set[2];
	char	*s;
	char	**strs;
	int		x;

	set[0] = c;
	set[1] = 0;
	s = ft_strtrim(ss, set);
	x = countc(s, c);
	if (s == NULL || s[0] == 0)
	{
		strs = malloc(sizeof(char *));
		strs[0] = 0;
		free(s);
		return (strs);
	}
	strs = malloc(sizeof(char *) * (x + 2));
	if (!(strs))
	{
		free(s);
		return (NULL);
	}
	strs = amin(strs, c, s);
	free (s);
	return (strs);
}
