/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbalazs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:03:58 by rbalazs           #+#    #+#             */
/*   Updated: 2023/12/13 11:04:00 by rbalazs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c <= 127 && c >= 0)
		return (1);
	return (0);
}

/*
#include <ctype.h>
#include <stdio.h>
int main()
{
	printf("%d", ft_isascii(130));
  printf("%d", isascii(130));
}
*/
