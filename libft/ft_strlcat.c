#include "libft.h"

size_t  ft_strlcat(char *dest, char *src, size_t n)
{
    size_t  i;
    size_t  j;

    i = ft_strlen(dest);
    j = 0;
    if (n < i)
        return (ft_strlen(src) + n);
    n--;
    while (n-- && src[j])
    {
        dest[i + j] = src[j];
        j++;;
    }
    dest[i + j] = 0;
    return (i + ft_strlen(src));
}