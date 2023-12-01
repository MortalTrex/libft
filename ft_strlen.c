#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/*
#include <stdio.h>
int main()
{
	char str[] = "test";
	printf("%zu", ft_strlen(str));
}
*/
