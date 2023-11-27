#include <stdlib.h>
#include <string.h>

char	*ft_strchr(char *str, int c)
{
	int		i;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i])
	{
    if (str[i] == (char)c)
      return((char *)&str[i]);
    i++;
	}
  if (str[i] == (char)c)
    return((char *)&str[i]);
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str[] = "salut";
  
	int schar = 'l';
	printf("%s\n", ft_strchr(str, schar));
	printf("vraie fonction : %s\n", strchr(str, schar));
	printf("vraie fonction : %p\n", strchr(str, schar));
	printf("vraie fonction : %p\n", ft_strchr(str, schar));
}
*/
