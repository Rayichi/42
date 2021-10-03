#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    int i;

    i = 0;
    while (((unsigned char *)src)[i] != c && n--)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        i++;
    }
    return (dest);
}