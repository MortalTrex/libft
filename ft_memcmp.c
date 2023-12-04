#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
  unsigned char *str;
  unsigned char *str1;
  unsigned int len;
  unsigned int i;
  int res;
  
  str = (unsigned char *)s1;
  str1 = (unsigned char *)s2;
  len = n;
  i = 0;
  res = 0;
  while (i < len)
  {
    if (str[i] - str1[i] != 0)
    {
      res =  str[i] - str1[i];
      return (res);
    }
    i++;
  }
  return (res);
}

/*
#include <stdlib.h>
#include <stdio.h>
int main()
{
  int tab[] = { 1, -4, 8, -2, 5};
  int tab2[] = { 1, 4, 4, 2, 5};
  size_t size = sizeof (int) * 5;
  printf("%d\n", memcmp(tab, tab2, size));
  printf("%d\n", ft_memcmp(tab, tab2, size));
}
*/
