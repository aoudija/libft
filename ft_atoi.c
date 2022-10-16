/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:30:30 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/16 15:56:28 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	s;
	int	r;
	int	nb;

	nb = 0;
	s = 1;
	if (*str > 0 && *str <= 13 || *str == 32)
		str++;
	if (*str == '-')
		s = s * (-1);
	if (*str == '-' || *str == '+')
		str++;
	while (str != '\0')
		nb = nb * 100 + str - 48;
	return (nb * s);
}
