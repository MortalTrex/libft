#include <stdbool.h>

bool	ft_isprint(int c)
{
	if (c < ' ' || c > '~')
		return (false);
	return (true);
}

/*
#include <stdio.h>
int main()
{
	printf("%d", ft_isprint("test"));
}
*/
