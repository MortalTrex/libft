#include "libft.h"
#include <stdlib.h>
#include <string.h>

char *ft_strjoin(char const *s1, char const *s2)
{
  unsigned char *str = (unsigned char *)s1;
  unsigned char *str1 = (unsigned char *)s2;
  int len;
  
  len = strlen(s1) + strlen(s2);
  char *res = (char *) malloc (len);
  int i;

  int y; 

  i = 0;
  y = 0;
  while (str[i])
  {
    res[i] = str[i];
    i++;
  } 
  while (i < len)
  {
    res[i] = str1[y];
    i++;
    y++;
  }
  return(res);
}

/*
int main()
{
  char tab[] = "Test";
  char tab2[] = "Salut";
  printf("%s", ft_strjoin(tab, tab2));
}
*/
