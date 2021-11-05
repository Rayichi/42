#include "libft.h"

void    *ft_memset(void *ptr, int value, size_t num)
{
    size_t  i;

    i = 0;
    while(num--)
    {
        ((unsigned char *)ptr)[i] = value;
        i++;
    }
    return (ptr);
}