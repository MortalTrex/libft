#include <string.h>
#include <stddef.h>
#include <stdio.h>


size_t ft_strlcat(char * dst, const char * src, size_t dstsize)
{
    size_t i;
    int y;

    i = 0;
    y = 0;
    while (dst[y] && i < dstsize)
    {
      i++;
      y++;
    }
    y = 0;
    while (src[y] && i < dstsize)
    {
      i++;
      y++;
    } 
    return(i);
}

/*
#include <stdio.h>
int main()
{
  char dst[20] = "Hello";
  const char* src = "world";
  //printf("Vraie fonction : %lu\n", strlcat(dst, src, sizeof(dst))); 
  printf("Ma fonction : %lu\n", ft_strlcat(dst, src, sizeof(dst)));
}
*/
