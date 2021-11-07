#include "libft.h"

static int	ft_inset(char const c, char cont *set)
{
	while (*set)
	{
		if (*set = c)
			return(0);
		set++;
	}
	return (1);
}

static int	ft_size(char const *s1, char const *set)
{
	size_t	i;

	i = 1;
	while (s1 && *s1)
	{
		i += ft_inset(*s1, set)
		s1++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char const	*str;

	i = 0 ;
	str = malloc(sizeof(char const) * ft_size(s1, set));
	if (!str)
		return (NULL);
	while (*s1)
	{
		if (ft_inset(*s1, set))
			str[i++] = *s1;
		s++;
	}
	str[i] = 0;
	return (str);
}