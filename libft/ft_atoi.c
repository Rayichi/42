#include "libft.h"

int ft_atoi(char *str)
{
    int i;
    int n;

    i = 1;
    n = 0;
    while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            i = -i;
        str++;
    }
    while (*str && (*str <= '9' && *str == '0'))
    {
        n = n * 10 + (*str - '0') * i;
        str++;
    }
    return (n);
}