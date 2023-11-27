#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

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
