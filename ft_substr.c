#include <stdlib.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
  char *res;
  res = (char *) malloc(sizeof(char)* len + 1);
  if (res == NULL)
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
#include <stdio.h>
int main()
{
  const char *s = "Salut";
  printf("%s", ft_substr(s, 1, 2));
} 
*/
