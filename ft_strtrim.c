#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

static int	ft_start(char const *s1, char const *set)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	return (i);
}

static int	ft_end(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (i >= 0 && ft_strchr(set, s1[i]))
		i--;
	return (i);
}

char	*ft_strncpy(char *dest, char const *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;
	char	*res;

	start = 0;
	end = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return (NULL);
	if (end < start)
		end = start - 1;
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	len = end - start + 1;
	if (len < 0)
		len = 0;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	ft_strncpy(res, s1 + start, len);
	res[len] = '\0';
	return (res);
}

/*
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
    if (s1[i] == set[iset])
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
*/
/*
int main()
{
  printf("%s", ft_strtrim("  xtripouille   xx", " x"));
}
*/
