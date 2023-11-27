#include <string.h>

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while(s1[i] == s2[i] && s1[i] != 0 && s2[i] != 0 && i < n - 1)
		i++;
	return(s1[i] - s2[i]);
}

/*
#include <stdio.h>
int main()
{
	printf("Ma fonction : %d\n", ft_strncmp("test", "oui", 2));
	printf("La véritable fonction: %d\n", strncmp("test", "oui", 2));
}
*/
