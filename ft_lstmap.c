/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:41:55 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/21 15:39:33 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_a;
	t_list	*lst_b;

	while (lst != NULL)
	{
		lst_a = ft_lstnew((*f)(lst->content));
		if (lst_a == NULL)
		{
			ft_lstclear(&lst_b, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_b, lst_a);
		lst = lst->next;
	}
	return (lst_b);
}
