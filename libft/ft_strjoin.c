#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char const	*str;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	str = malloc(1 + ft_strlen(s1) + ft_strlen(s2));
	if (!str)
		rturn (NULL);
	while (s1[i])
		str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		str[j++] = s2[i++];
	str[j] = 0;
	return (str);
}
