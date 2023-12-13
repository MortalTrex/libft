#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}

/*
#include <ctype.h>
#include <stdio.h>
int main()
{
	printf("%d\n", ft_isalnum('\b'));
	printf("%d\n", isalnum('\b'));
}
*/
