#include "libft.h"

int    ft_strlcpy(char *dest, char *src, size_t num)
{
    int i;

    i = 0;
    if (num > 0)
    {
        while(src && src[i] && (num - 1))
        {
            dest[i] = src[i];
            i++;
            num--;
        }
        dest[i] = 0;
    }
    return (ft_strlen(src));
}