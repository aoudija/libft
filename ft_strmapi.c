/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:13:12 by aoudija           #+#    #+#             */
/*   Updated: 2022/11/07 10:56:50 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ss;

	i = 0;
	if (!s || !f)
		return (NULL);
	ss = ft_strdup(s);
	if (!ss)
		return (NULL);
	while (ss[i])
	{
		ss[i] = f(i, ss[i]);
		i++;
	}
	return (ss);
}
