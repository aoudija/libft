/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:00:47 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/17 14:37:10 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*str_before(char const *s, char c)
{
	int		i;
	int		len1;
    char	*p;
	char	*rb;

    i = 0;
    p = ft_strchr(s, c);
    len1 = ft_strlen(s) - ft_strlen(p);
	rb = (char *) malloc(len1);
    if (rb == NULL)
        return (NULL);
    while (i < len1)
    {
    	rb[i] = s[i];
    	i++;
    }
	rb[i] = 0;
    return(rb);
}
char	*str_after(char const *s, char c)
{
	int		i;
	int		len1;
	int		len2;
	char	*s2;
	
	len1 = ft_strlen (str_before(s,c)) + 1;
	len2 = ft_strlen(s)- len1;
	s2 = (char *) malloc(len2);
	if (s2 == NULL)
		return NULL;

	while (i < len2)
	{
		s2[i] = s[len1];
		i++;
		len1++;
	}
	s2[i] = 0;
	return(s2);
}

int	countc(char *tr,char c)
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

	set[0] = c;
	tr = malloc(ft_strlen(ft_strtrim(s,set)));
	tr = ft_strtrim(s,set);
	ct = countc(tr,c);
	strs = (char *)malloc(ct + 1);
	if (strs == NULL)
		return (NULL);
	i = ct + 1;
	j = 0;
	while (j < i)
	{
		while ()
		{
			
		}
		j++;
	}
	return (strs);
}

int	main()
{
}