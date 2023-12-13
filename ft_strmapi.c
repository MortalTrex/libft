#include <stdlib.h>
#include <string.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*res;

	if (!s)
		return (NULL);
	if (!f)
		return (NULL);
	res = strdup(s);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (res[i])
	{
		res[i] = (*f)(i, res[i]);
		i++;
	}
	return (res);
}

/*
char ft_test(unsigned int nb, char c)
{
  return(c + nb);
}

#include <stdio.h>
int main()
{
  char s[] = "Salut ceci est un test";
  char *res = ft_strmapi(s, ft_test);
  if(res != NULL)
  {
    printf("%s", res);
    free(res);
  }
  return 0;
}
*/
