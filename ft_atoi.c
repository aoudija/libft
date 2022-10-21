/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:30:30 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/21 18:05:33 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	s;
	int	nb;

	nb = 0;
	s = 1;
	while ((*str > 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-')
		s *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + *str -'0';
		str++;
	}
	return (nb * s);
}
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
	int	nb;

	nb = n;
	i = ct(nb);
	if (!(str = malloc(i * sizeof(char) + 1)))
		return (0);
	str[i] = 0;
	if (nb == 0)
	{
		str = malloc(sizeof(char));
		str[0] = 48;
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		str[i--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (str);
}

int main()
{
	char s[5] = " -1238";
	int i = atoi(s);
	printf("%i", i);
}