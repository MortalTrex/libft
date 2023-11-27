/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbalazs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:51:03 by rbalazs           #+#    #+#             */
/*   Updated: 2023/11/20 12:53:28 by rbalazs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	res;
	int	i;
	int	sign;

	res = 0;
	i = 0;
	sign = 1;
	while(str[i] >= ' ' && str[i] <= ' ')
	{
		i++;
	}
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

/*
#include <stdlib.h>
#include <stdio.h>
int main()
{
	printf("ma fonction : %d\n", ft_atoi("   234"));
	printf("le vrai atoi : %d\n", atoi("   234"));
}
*/
