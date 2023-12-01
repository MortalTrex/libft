#include "libft.h"
#include <stdlib.h>
#include <string.h>

char *ft_strjoin(char const *s1, char const *s2)
{
  int len;
  
  len = strlen(s1) + strlen(s2);
  char *res; 

  res = (char *) malloc(sizeof(char) * (len + 1));
  
  if (!res)
    return(NULL);

  int i;
  int j;

  i = 0;
  j = 0;
  while (s1[i])
  {
    res[i] = s1[i];
    i++;
  } 
  while (i < len)
  {
    res[i] = s2[j];
    i++;
    j++;
  }
  res[i] = '\0';
  return(res);
}

/*
int main()
{
  char tab[] = "";
  char tab2[] = "42";
  printf("%s", ft_strjoin(tab, tab2));
}
*/
