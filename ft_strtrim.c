#include <stdlib.h>
#include <string.h>
#include <stdio.h>

static int ft_start(char const *s1, char const *set)
{
  unsigned int i;
  unsigned int iset;

  i = 0;
  iset = 0;
  while (set[iset])
  {
    if (s1[0] == set[0])
    {      
      while (s1[i] == set[iset])
        i++;
    }
    iset++;
  }
  return(i);
}

static int ft_end(char const *s1, char const *set)
{
  unsigned int i;
  unsigned int iset;

  i = strlen(s1);
  iset = strlen(set);
  while (iset > 0)
  {
    if (s1[strlen(s1)] == set[strlen(set)])
    {      
      while (s1[i] == set[iset])
        i--;
    }
    iset--;
  }
  if (s1[strlen(s1)] == set[strlen(set)])
  {      
    while (s1[i] == set[iset])
      i--;
  }
  return(i);
}

char *ft_strtrim(char const *s1, char const *set)
{
  int i;
  int y;
  int len;
  char  *res;

  i = ft_start(s1, set);
  y = 0;
  len = ft_end(s1, set) - i + 1;
  /*
  printf("len :%d\n", len);
  printf("start :%d\n", ft_start(s1, set));
  printf("end :%d\n", ft_end(s1, set));
  */
  res = (char *) malloc (sizeof(char) * len + 1);
  if (res == NULL)
    return(NULL);

  i = ft_start(s1, set);
  y = 0;

  while (i <= ft_end(s1, set))
  {
    res[y] = s1[i];
    i++;
    y++;
  }
  res[i] = '\0';
  return(res);
}

/*
int main()
{
  printf("%s", ft_strtrim("  xtripouille   xx", " x"));
}
*/
