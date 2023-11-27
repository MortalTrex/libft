#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
  char  res;
  
  if (n == -2147483648)
  {
    write(fd, "-2146473648", 11);
    return;
  }
  if (n < 0)
  {
    write(fd, "-", 1);
    n = n * (-1);
  }
  if (n >= 10) 
    ft_putnbr_fd(n / 10, fd);
  n = n % 10;
  res = '0' + n;
  write(fd, &res, 1);
}

/*
int main()
{
  ft_putnbr_fd(-2147483648, 3);
}
*/
