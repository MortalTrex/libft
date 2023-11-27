#include <stdlib.h>
#include <string.h>

char *ft_strtrim(char const *s1, char const *set)
{
  char  *res;
  res = (char *) malloc (sizeof(char) * 5);
  if (res == NULL)
    return(NULL);
  int i;
  int y;

  i = 0;
  y = 0;
  while(s1[i] == set[0])
    i++;
  while(s1[i] && s1[i] != set[0])
  {
    res[y] = s1[i];
    i++;
    y++;
  }
  res[i] = '\0';
  return(res);
}

/*
#include "stdio.h"
int main()
{
  printf("%s", ft_strtrim("  Salut  ", " "));
}
*/
