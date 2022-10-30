/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:55:40 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/30 12:18:22 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = lst;
}

int main()
{
	t_list *n1, *n2, *n3;

	n1 = ft_lstnew((void *)12);
	n2 = ft_lstnew((void *)13);
	n3 = ft_lstnew((void *)14);

	n1->next = n2;
	n2->next = n3;
	n3->next = NULL;
	t_list  *new;
	
	new = ft_lstnew((void *)15);
	ft_lstadd_front(&n1, new);
	t_list *tmp;
	tmp = new;	
	while (tmp)
	{
		printf("%d\n",(int)tmp->content);
		tmp = tmp->next;
	}
	
}