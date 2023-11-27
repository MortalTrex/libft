#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
  int i;

  i = 0;
  while(s[i])
  {
    write(fd, &s[i], 1);
    i++;
  }
  write(fd, "\n", 1);
}

/*
int main()
{
  ft_putendl_fd("salut", 1);
  ft_putendl_fd("c'est un test", 1);
}
*/
