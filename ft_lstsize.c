/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:04:15 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/30 14:08:34 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}	
	return (i);
}

int main()
{
	t_list *a, *b, *c;

	a = ft_lstnew("data");
	b = ft_lstnew("daf");
	c = ft_lstnew("adfa");
	a->next = b;
	b->next = c;
	c->next = 0;
	
	printf("%d\n", ft_lstsize(a));	
	printf("%s\n", a->next->content);
}