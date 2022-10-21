/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:14:45 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/21 17:12:42 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *) dst;
	s = (char *) src;
	if (d > s)
	{
		while (n--)
		{
			d[n] = s[n];
		}
		
	}
	else
		ft_memcpy(d, s, n);
	return (d);
}
int main()
{
	char s[] = "123456";
	char *d;
	d = ft_memcpy(s + 2, s, 3);
	printf("&%s&",d);
}