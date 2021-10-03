#include "libft.h"

char    *ft_strnstr(char *str, char *to_find, size_t n)
{
    size_t  a;

    a = ft_strlen(to_find);
    if (a > n)
        a = n;
    while (str && *str)
    {
        if (!ft_strncmp(str, to_find, a))
            return (str);
        str++;
    }
    return (NULL);
}