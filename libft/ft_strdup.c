#include "libft.h"

char    *ft_strdup(char *str)
{
    int     i;
    char    *s2;

    i = 0;
    s2 = malloc(ft_strlen(str) + 1);
    if (!s2)
        return (NULL);
    while (str && *str)
    {
        s2[i] = *str;
        str++;
        i++;
    }
    s2[i] = 0;
    return (s2);
}