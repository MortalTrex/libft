#include <string.h>
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
  unsigned int i;

  i = 0;
  if (dstsize == 0)
  {
    while(src[i])
      i++;
    return (i);
  }
  if (dstsize > 0)
  {
    while (src[i] && i < dstsize - 1)
    {
      dst[i] = src[i];
      i++;
    }
  }
  dst[i] = '\0';
  i = 0;
  while (src[i])
    i++;
  return(i);
}

/*
#include <stdio.h>
int main()
{
  char source[] = "coucou";
	char destination[10]; memset(destination, 'A', 10);
  size_t size = 0;

  printf("Source string: %s\n", source);
  size_t result = ft_strlcpy(destination, source, size);
  printf("Destination string after copying: %s\n", destination);  
  printf("Length of copied string: %zu\n", result);

  char destination1[20];
  const char *source1 = "Hello";
  size_t size1 = 4;

  printf("Source string: %s\n", source1);
  size_t result1 = strlcpy(destination1, source1, size1);
  printf("Destination string after copying: %s\n", destination1);
  printf("Length of copied string: %zu\n", result1);
  return 0; 
}
*/
