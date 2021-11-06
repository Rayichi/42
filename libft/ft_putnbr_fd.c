

#include "libft.h"

void    ft_putnbr2(long n, int fd)
{
    if (n >= 10)
        ft_putnbr2(n / 10);
    ft_putchar_fd('0' + n% 10, fd);
}

void    ft_putnbr(int nb)
{
    long    n;

    n = nb;
    if (n < 0)
    {
        n = -n;
        ft_putchar_fd('-', fd);
    }
    ft_putnbr2(n, fd);
}