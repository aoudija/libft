/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:00:47 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/19 12:39:54 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*str_before(char const *s, char c)
// {
// 	int		i;
// 	int		len1;
//     char	*p;
// 	char	*rb;

//     i = 0;
//     p = ft_strchr(s, c);
//     len1 = ft_strlen(s) - ft_strlen(p);
// 	rb = (char *) malloc(len1);
//     if (rb == NULL)
//         return (NULL);
//     while (i < len1)
//     {
//     	rb[i] = s[i];
//     	i++;
//     }
// 	rb[i] = 0;
//     return(rb);
// }
// char	*str_after(char const *s, char c)
// {
// 	int		i;
// 	int		len1;
// 	int		len2;
// 	char	*s2;

// 	len1 = ft_strlen (str_before(s,c)) + 1;
// 	len2 = ft_strlen(s)- len1;
// 	s2 = (char *) malloc(len2);
// 	if (s2 == NULL)
// 		return NULL;
// 	while (i < len2)
// 	{
// 		s2[i] = s[len1];
// 		i++;
// 		len1++;
// 	}
// 	s2[i] = 0;
// 	return(s2);
// }

int	countc(char *tr, char c)
{
	int	i;
	int	ct;

	ct = 0;
	i = 0;
	while (tr[i] != '\0')
	{
		if (tr[i] == c)
			ct++;
		i++;
	}
	return (ct);
}

char	**ft_split(char const *s, char c)
{
	char	*set;
	char	*tr;
	char	**strs;
	int		ct;
	int		i;
	int		j;
	int		x;
	int		k;

	set[0] = c;
	x = 0;
	// tr = malloc(ft_strlen(ft_strtrim(s, set)));
	tr = ft_strtrim(s, set);
	ct = countc(tr, c);
	strs = malloc(sizeof(char *) * (ct + 1));
	if (strs == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (tr[j] && i < ct + 1)
	{
		if (tr[j] == c)
		{
			strs[i] = malloc(j - x + 1);
			if(strs[i] == NULL)
				return (NULL);
			x = j - x - 1;
			k = 0;
			while (k < j)
			{printf("h");
				strs[i][k] = tr[x];
				x++;
				k++;
			}
			i++;
		}
		j++;
	}
	return (strs);
}

int	main()
{
	
	char **s = ft_split("amineaminea", 'a');
	int i = 0;
	while (s[i])
	{
		printf("%s\n", s[i]);
		i++;
	}
}