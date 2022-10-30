/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:40:48 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/30 12:40:58 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.a"

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