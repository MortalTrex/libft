#include <string.h>

char *ft_strrchr(const char *s, int c)
{
  size_t i = 0; 

  if (c == 0)
      return (char *)s;

  while (s[i]) {
      if (s[i] == c)
          return (char *)&s[i];
      i++;
    }
    return(0);
}

/*
#include <stdio.h>
int main()
{
  printf("Vraie fonction : %s\n", strrchr("woah", 'h'));
  printf("Ma fonction : %s\n", ft_strrchr("woah", 'h'));
}
*/
