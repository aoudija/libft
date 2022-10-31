/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoudija <aoudija@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:40:48 by aoudija           #+#    #+#             */
/*   Updated: 2022/10/31 19:03:59 by aoudija          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
	t_list	*n1, *n2, *n3, *n0, *tmp, *t;

	// n1 = ft_lstnew("data");
	//n1 =  NULL;
	// t_list **g;
	// *g = n1;
	// tmp = ft_lstnew("new");

	//ft_lstadd_front(NULL, tmp);
	// printf("%p\t%p");
	n1 = ft_lstnew((void *)1);
	n2 = ft_lstnew((void *)2);
	n3 = ft_lstnew((void *)3);
	n1->next = n2;
	n2->next = n3;
	n3->next = NULL;
	// n0 = ft_lstnew((void *)00);
	n0 = ft_lstlast(n1);
	// tmp = n1;
	
	tmp = ft_lstnew((void *)4);
	ft_lstadd_back(NULL, tmp);
	n1 = NULL;
	t = n1;
	while(t)
	{
		printf("%d\n",(int)t->content);
		t = t->next;
	}
}