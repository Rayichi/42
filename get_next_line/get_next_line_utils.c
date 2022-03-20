#include "get_next_line.h"

int	ft_strlen(char	*s)
{
	int	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s1 && *s1))
		str[i++] = *(s1++);
	while (s2 && *s2))
		str[i++] = *(s2++);
	str[i] = 0;
	return (str);
}

int	ft_strchr(char *str, int c)
{
	while ((unsigned char)*str && (unsigned char)*str != (unsigned char)c)
		str++;
	if ((unsigned char)*str != (unsigned char)c)
		return (1);
	return (0);
}

void	ft_strcpy(char *s1, char *str)
{
	int	i;

	i = 0;
	while (s1 && s1[i])
		str[i] = s1[i];
	str[i] = 0;
}

char	*ft_copy(char s1, char **line)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	while (s1 && s1[j] && s1[j] != '\n')
		j++;
	while (s1 && s1[j + i] && s1[j + i] != '\n')
		i++;
	str = malloc(sizeof(char) * (1 + j - i));
	i = 0;
	while (s1 && *s1 && *s1 != '\n')
	{
		str[i++] = *s1;
		s1++;
	}
	str[i] = 0;
	ft_free(line);
	return (str);
}