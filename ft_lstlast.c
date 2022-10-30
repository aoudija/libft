/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:19:05 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/30 10:59:56 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;
	int	len;

	len = ft_lstsize(lst);
	tmp = lst;
	while (len > 0)
	{
		tmp = tmp.next;
		len--;
	}
	return (tmp);
}
