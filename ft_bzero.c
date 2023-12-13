#include <strings.h>

void	ft_bzero(void *str, size_t n)
{
	unsigned int	i;
	unsigned char	*chaine;

	i = 0;
	chaine = str;
	while (i < n)
	{
		chaine[i] = 0;
		i++;
	}
}

/*
#include <stdio.h>
int	main()
{
  int n = 6;
	char chaine[n];
  for (int i = 0; i < n; i++)
      printf("Valeur à l'indice %d : %d\n", i, chaine[i]);
  printf("\033[1;31mAvec la fonction bzero :\033[0m\n");
	bzero(chaine, n);
  for (int i = 0; i < n; i++)
      printf("Valeur à l'indice %d : %d\n", i, chaine[i]);

  printf("\033[1;34m\nNouvelle chaine :\033[0m\n");
  char machaine[n];
  for (int i = 0; i < n; i++)
      printf("Valeur à l'indice %d : %d\n", i, machaine[i]);
  printf("\033[1;34mAvec ma fonction :\033[0m\n");
	ft_bzero(machaine, n);
  for (int i = 0; i < n; i++)
      printf("Valeur à l'indice %d : %d\n", i, machaine[i]);
}
*/
