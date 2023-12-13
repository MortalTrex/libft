#include <string.h>
#include <stddef.h>
#include <stdio.h>

static size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	len;

	len = 0;
	while (len < maxlen)
	{
		if (!*s)
			break ;
		len++;
		s++;
	}
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;

	i = 0;
	j = 0;
	dstlen = ft_strnlen(dst, size);
	while (i < size && dst[i])
		i++;
	if (i == size)
		return (i + strlen(src));
	while (src[j])
	{
		if (j < size - dstlen - 1)
		{
			dst[i] = src[j];
			i++;
		}
		j++;
	}
	dst[i] = '\0';
	return (dstlen + j);
}

/*
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
*/

/*
#include <stdio.h>
int main()
{
  char dst[30]; memset(dst, 0, 30);
	char * src = (char *)"AAAAAAAAA";
	dst[0] = 'B';
  //printf("Vraie fonction : %lu\n", strlcat(dst, src, sizeof(dst))); 
  printf("Ma fonction : %lu\n", ft_strlcat(dst, src, 0));  
}
*/
