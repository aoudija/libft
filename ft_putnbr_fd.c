/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:17:16 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/29 13:52:13 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-',fd);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10,fd);
		nb = nb % 10;
	}
	if (nb < 10)
		ft_putchar_fd(nb + 48,fd);
	// char	*s;

	// s = ft_itoa(n);
	// ft_putstr_fd(s, fd);
	// free(s);
}
