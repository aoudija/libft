/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:02:03 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/21 21:14:48 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ct(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	int			nb;

	nb = n;
	i = ct(nb);
	str = malloc(i * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	str[i--] = 0;
	if (nb == 0)
	{
		str[0] = 48;
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		str[i--] = nb % 10 + 48;
		nb = nb / 10;
	}
	return (str);
}
