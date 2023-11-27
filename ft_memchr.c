#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
  unsigned int i;
  unsigned int tofind = c;
  unsigned char *str = (unsigned char *)s; 
  
  i = 0;
  while(str[i] < n)
  {
    if (str[i] == tofind)
     return(str);
    i++;
  }
  return(0);
} 

/*
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main()
{
 char tab[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
 const unsigned int size = 10;
 int c = 60;
 void * found = memchr( tab, c, size );
 printf("La vraie :\n");
 printf( "%d is %s\n", c, ( found != NULL ? "found" : "not found" ) );
 if ( found != NULL )
    printf( "La valeur à la position calculée est %d\n", *((char *) found) );

 printf("La mienne :\n");
 void * found1 = ft_memchr( tab, c, size );
 printf( "%d is %s\n", c, ( found1 != NULL ? "found" : "not found" ) );
 if ( found1 != NULL )
    printf( "La valeur à la position calculée est %d\n", *((char *) found1) );
}
*/

