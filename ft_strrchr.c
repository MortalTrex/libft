#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = strlen(s);
	if (s == NULL)
		return (NULL);
	while (i > 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

/*
#include <stdio.h>
int main()
{
  printf("Vraie fonction : %p\n", strrchr("tripouille", 't'));
  printf("Ma fonction : %p\n", ft_strrchr("tripouille", 't'));
}
*/
