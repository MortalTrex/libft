#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	ft_countwords(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	*ft_strndup_split(const char *s1, int index, int n)
{
	int		i;
	char	*dup;

	dup = malloc(sizeof(char) * (n + 1));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dup[i] = s1[index];
		i++;
		index++;
	}
	dup[i] = '\0';
	return (dup);
}

void	ft_free_split(char **res, int index)
{
	while (index >= 0)
	{
		free(res[index]);
		index--;
	}
	free(res);
}

static void	process_words(char const *s, char c, char **res, int words)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	j = 0;
	while (j < words)
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		n = 0;
		while (s[i + n] && s[i + n] != c)
			n++;
		res[j] = ft_strndup_split(s, i, n);
		if (!res[j])
		{
			ft_free_split(res, j);
			return ;
		}
		j++;
		i += n;
	}
	res[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**res;

	if (!s)
		return (NULL);
	words = ft_countwords(s, c);
	res = malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	process_words(s, c, res, words);
	return (res);
}

/*
char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		n;
	int		words;
	char	**res;

	if (!s)
		return (NULL);
	words = ft_countwords(s, c);
	res = malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (j < words)
	{
		if (s[i] != c)
		{
			n = 0;
			while (s[i + n] && s[i + n] != c)
				n++;
			res[j] = ft_strndup_split(s, i, n);
			if (res[j] == NULL)
			{
				ft_free_split(res, j);
				return (NULL);
			}
			j++;
			i += n;
			if (j == words)
			{
				res[j] = NULL;
				break ;
			}
		}
		else
			i++;
	}
	res[j] = NULL;
	return (res);
}
*/
/*
static char	**ft_freedom(char **splitter, int v)
{
	while (v--)
	{
		free(splitter[v]);
	}
	free(splitter);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t		index;
	static int	v;
	char		**splitter;
	int	words;

	index = 0;
	words = ft_countwords(s, c); 
	v = 0;
	if (!s)
		return (NULL);
	splitter = malloc(sizeof(char *) * (words + 1));
	if (!splitter)
		return (NULL);
	while (s[index] && v < words)
	{
		if (s[index] == c)
		{
			splitter[v] = ft_substr(s, index, words);
			if (!splitter[v++])
				return (ft_freedom(splitter, v));
			index += words;
		}
		else
			index++;
	}
	splitter[v] = NULL;
	return (splitter);
}


int count_words(char const *str, char c)
{
  int i;
  int count;

  i = 0;
  count = 1;
  if (strlen(str) == 0)
    return(0);
  while(str[i])
  {
    if (str[i] == c && isalnum(str[i - 1]))
    {
        count++;
    }
    i++;
  }
  if (str[i - 1] == c)
    count--;
  return(count);
}

int count_char(char const *str, char c, int i)
{
  int count;

  count = 0;
  while(str[i] && str[i] != c)
  {
    count++;
    i++;
  }
  return(count); 
}

char *ft_strdup_split(const char *s1, int *retindex, int index, int n)
{
  char *dup;
  int i;

  i = 0;
  dup = malloc(sizeof(char) * (n + 1));
  if (dup == NULL)
    return(NULL);
  while (s1[index] && i < n)
  {
    dup[i] = s1[index];
    i++;
    index++;
  }
  *retindex = index;
  dup[i] = '\0';
  return (dup);
}

char **ft_split(char const *s, char c)
{
  char **res;
  int words;
  int i;
  int j;
  if (s == NULL)
    return (NULL);
  words = count_words(s, c);
  res = malloc(sizeof(char *) * (words + 1)); 
  if (res == NULL)
    return (NULL);
  i = 0;
  j = 0;
  while (j < words)
  {
    if (s[i] != c)
    {
      res[j] = ft_strdup_split(s, &i, i, count_char(s, c, i));
      if (res[j++] == NULL)
      {
        j--;
        while (j >= 0)
        {
          free(res[j]);
          j--;
        }
        free(res);
        return(0);
      }
    }
    i++;
  }
  res[j] = 0;
  return(res);
}
*/
/*
int main()
{
  char *s = "salutca-va";
  printf("Il y'a %d mots\n", count_words(s, ' '));
  char **res = ft_split(s, '-');
  int i = 0;
  while(res[i])
  {
    printf("%s", res[i]);
    i++;
  }
  free(res);
}
*/
