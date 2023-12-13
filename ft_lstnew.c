/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagudelo <dagudelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:41:59 by dagudelo          #+#    #+#             */
/*   Updated: 2023/11/20 10:53:42 by dagudelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*liste;

	liste = (void *)malloc(sizeof(t_list));
	if (liste != NULL)
	{
		(*liste).content = content;
		(*liste).next = NULL;
	}
	return (liste);
}
