#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
  if (!s)
    return(NULL);
  if (start > len)
    len = 0;
  if (len > strlen(s))
    len = strlen(s);
  char *res;
  res = (char *) malloc(sizeof(char) * (len + 1));
  if (!res)
    return(NULL);
  size_t i;

  i = 0;
  while(i < len)
  {
    res[i] = s[start];
    i++;
    start++;
  }
  res[i] = '\0';
  return (res);
}

/*
int main()
{
  printf("%s", ft_substr("BONJOUR LES HARICOTS !", 8, 14));
}
*/
