int	ft_isalnum(int c)
{
		if (c >= '0' &&  c <= '9')
			return (0);
	return (1);
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
