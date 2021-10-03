#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int i;

    i = 0;
    while(s1[i] && s2[i] == s1[i] && n--)
        i++;
    return(s1[i] - s2 [i]);
}