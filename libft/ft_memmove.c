#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t num)
{
    size_t  i;

    i = 0;
    while(num--)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        i++;
    }
    return (dest);
}