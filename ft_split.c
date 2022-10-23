/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:00:47 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/23 15:42:10 by aoudija          ###   ########.fr       */
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
	printf("%d\n", ct);
	return (ct);
}

int	lnstr(const char *s, int j, char c)
{
	int	i;

	i = 0;
	if (s[j] == c)
		j++;
	while (s[j] != 0 && s[j] != c)
	{
		i++;
		j++;
	}
	return (i);
}

char	**rmemptystr(char **strs, int ct)
{
	int		i;
	int		k;
	char	**sfinal;

	i = 0;
	k = 0;
	sfinal = malloc(sizeof(char *) * (ct + 2));
	while (strs[i])
	{
		if (strs[i][0] != 0)
		{
			sfinal[k] = ft_strdup(strs[i]);
			k++;
		}
		i++;
	}
	sfinal[k] = 0;
	return (sfinal);
}
char *optimize(char *s,int i)
{
	s = malloc(i + 1)
}
char	**ft_split(char *s, char c)
{
	char	set[2];
	char	**strs;
	int		ct;
	int		i;
	int		j;
	int		x;
	int		k;

	set[0] = c;
	set[1] = 0;
	s = ft_strtrim(s, set);
	ct = countc(s, c);
	strs = malloc(sizeof(char *) * (ct + 2));
	if (strs == NULL)
		return (NULL);
	i = 0;
	j = 0;
	x = lnstr(s, j, c);
	while (s[j++])
	{
		if (s[j] == c || !s[j + 1])
		{
			strs[i] = malloc(x + 1);
			if (strs[i] == NULL)
				return (NULL);
			k = 0;
			if (s[j + 1] == 0)
				j++;
			while (x > 0)
			{
				strs[i][k] = s[j - x];
				k++;
				x--;
			}
			x = lnstr(s, j, c);
			strs[i++][k] = 0;
		}
	}
	strs[i] = 0;
	return (rmemptystr(strs, ct));
}
