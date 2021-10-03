#include "libft.h"

char    *ft_strchr(char *str, int c)
{
    while (str && *str && *str != c)
        str++;
    if (*str != c)
        return (NULL);
    return (str);
}