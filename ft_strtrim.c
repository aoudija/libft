/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:22:17 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/14 17:41:42 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tri;
	int		i;
	int		j;
	int		y;
	int		lens1;
	int		lenset;

	int z = ft_strlen(s1) - 1;
	int x = ft_strlen(set) - 1;
	i = 0;
	j = 0;
	y = 0;
	// if (s1 == NULL)
	// 	return (NULL);
	// tri = (char *)malloc(lens1 + 1);
	// if (tri == NULL)
	// 	return (NULL);
	while (s1[i] && set[j])
	{
		if(s1[0] == set[j])
			j++;
		i++;
	}
	while (s1[z] && set[x])
	{
		if(s1[z] == set[x])
			x++;
		z--;
	}
	printf("'%s'\n",s1 + (ft_strlen(s1) + 1 + x));
	printf ("%d\n%d\n%d\n", i, j,x);
	return (s1 + (j - 1));
}

int	main(void)
{
	char	*p;
	p = ft_strtrim("  amine  ", "ae");
	printf ("%s", p);
}
