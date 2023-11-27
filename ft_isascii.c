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
