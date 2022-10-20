/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:13:12 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/20 19:39:17 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int , char))
{
	unsigned int	i;
	char			*ss;

	i = 0;
	ss = ft_strdup(s);
	while (ss[i])
	{
		f(i , ss[i]);
		i++;
	}
	return (ss);
}
