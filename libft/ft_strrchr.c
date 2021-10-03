#include "libft.h"

char    *ft_strrchr(char *str, int c)
{
    char    *s;

    s = ft_strchr(str, c);
    while (s && *s && ft_strchr(s + 1, c))
        s= ft_strchr(s + 1, c);
    return (s);
}