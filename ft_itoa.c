#include <stdlib.h>
#include <stdio.h>

int ft_count(int n)
{
  int res;

  res = 0;
  if (n < 0)
  {
    n = n * -1;
    res++;
  }
  if (n == 0)
    res = 1;
  while (n > 0)
  {
      res++;
      n = n / 10;
  }
  return(res);
}

char *ft_itoa(int n)
{
  int i;
  char *res;
  int last_nb;
    
  i = ft_count(n);
  res = calloc (sizeof(char), i + 1);
  if (res == NULL)
    return(NULL);
  last_nb = n;
  if (n < 0)
    last_nb = last_nb * (-1);
  res[i] = '\0';
  while(i > 0)
  {
    res[i - 1] = '0' + last_nb % 10;
    last_nb = last_nb / 10;
    i--;
  }
  if (n < 0)
    res[0] = '-';
  return(res);
}

/*
int main()
{
  int n = 0;
  char *res = ft_itoa(n);
  printf("%s", res);
  free(res);
}
*/
