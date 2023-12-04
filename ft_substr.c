#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
  if (!s)
    return(NULL);
  size_t lenmod = 0; 
  if (start > len)
    lenmod = 0;
  else if (start <= len)
    lenmod = strlen(s) - start;
  char *res;
  res = (char *) malloc(sizeof(char) * (lenmod + 1));
  if (!res)
    return(NULL);
  size_t i;

  i = 0;
  while(i < lenmod)
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
  printf("%s", ft_substr("tripouille", 1, 1));
}
*/
