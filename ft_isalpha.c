#include <stdbool.h>

int	ft_isalpha(int c)
{
		if ((c > 'Z' && c < 'a') ||  c > 'z' || c < 'A')
			return (0);
	return (1);
}

/*
#include <stdio.h>
int main()
{
	printf("%d", ft_isalpha("tes34t"));
}*/
