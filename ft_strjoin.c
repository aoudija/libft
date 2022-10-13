/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:59:01 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/13 14:55:03 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*sj;
	int		i;
	int		d;
	int		s;

	i = 0;
	d = ft_strlen(s1);
	s = ft_strlen(s2);
	len = d + s;
	sj = (char *)malloc(len + 1);
	if (sj == NULL)
		return (NULL);
	sj = s1;
	while (s2[i])
	{
		sj[d + i] = s2[i];
		i++;
	}
	sj[len] = 0;
	return (sj);
}

int main()
{
	char p[] = "amine";
	char s[] = " oudija";
	char *d;
	d = ft_strjoin(p,s);
	printf("(%s)\n",d );
}