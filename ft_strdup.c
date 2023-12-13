#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		i;

	i = 0;
	dup = malloc(sizeof(char) * (strlen(s1) + 1));
	if (dup == NULL)
		return (NULL);
	while (s1[i])
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*
#include <stdio.h>
int main()
{
  char *s1 = "Salut";
  printf("Vraie fonction :%s\n", strdup(s1));
  printf("Ma fonction :%s\n", ft_strdup(s1));
}
*/
