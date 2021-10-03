#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t num)
{
    int i;

    i = 0;
    while(num--)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        i++;
    }
    return (dest);
}