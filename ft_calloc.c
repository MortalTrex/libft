#include <stdlib.h>
#include <strings.h>
#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
  //int i;
  void *str;
  /*
  if (count == 0 || size == 0)
  {
    count = 1;
    size = 1;
  }
  */
  str = malloc(count * size);
  if (!str)
    return(NULL);
  /*
  i = 0;
  while(i < size)
  {
    str[i] = 0;
    i++;
  }
  */   
  bzero(str, count * size);
  return(str);
}

/*
#include <stdio.h>
int main()
{
  int *tab = (int *) ft_calloc (3, -5);
  int i;

  for(i = 0; i < 3; i++)
  {
    tab[i] = i;
    printf("%d", tab[i]);
  }
  free(tab);
}
*/
